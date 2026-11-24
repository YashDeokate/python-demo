
import asyncio

async def task(name):
    print(f"{name} started")
    await asyncio.sleep(3)
    print(f"{name} completed")


async def main():
    await asyncio.gather(
        task("Task1"),
        task("Task2"),
        task("Task3")
    )


asyncio.run(main())
