Networking Basics Exam Prep (Modules 1 to 7)
Oct 26, 2026 · @Someone
Start here
What this covers: Cisco Networking Academy, Networking Basics, Modules 1 to 7 (the Build a Small Network and Network Access checkpoint exams are not included). Everything below was taken from the course pages themselves, including the Check Your Understanding items and the module quizzes. The module 5, 6 and 7 quizzes were not opened, so their exact questions were not seen; the topics they cover are all in the notes.
Study plan (about 2 hours):
1. Read the notes for each module (20 min each for the heavy ones: modules 2, 4, 5, 7).
2. Do the MCQ bank without looking, then check the key and re-read the notes for anything wrong.
3. Last 15 minutes: read the one-page cheat sheet.
15 facts most likely to be asked:
1. The internet is owned by no single person or group.
2. A bit is 0 or 1; a byte is 8 bits.
3. Bandwidth = capacity in bits per second; throughput = actual, includes latency.
4. Sensor collects, actuator creates movement, RFID tag tracks.
5. Routers, switches and firewalls are intermediary devices; PCs and phones are end devices.
6. P2P: easy to set up, but no central administration and not scalable.
7. DSL = telephone line, cable = TV coax, satellite = remote areas.
8. GPS = location, NFC = a few cm / payment, Bluetooth = short range accessories and pairing.
9. Tethering = sharing a connection; mobile devices use Wi-Fi first, then cellular.
10. Router Internet port goes to the modem; LAN ports go to the internal switch.
11. SSID: case sensitive, up to 32 characters, broadcast enabled by default; encryption stops outsiders; guest SSID for visitors.
12. IEEE 802.11 = Wi-Fi (2.4 and 5 GHz); the Wi-Fi Alliance tests devices.
13. Six protocol characteristics: format, size, timing, encoding, encapsulation, message pattern; RFCs come from the IETF.
14. TCP/IP has 4 layers, OSI has 7; IP addressing is OSI Layer 3; Ethernet is Layer 2.
15. A switch learns from the source MAC and forwards by the destination MAC; unknown destination = flood to all ports except the incoming one.
Module 1: Communication in a Connected World
Goal: explain the basic ideas of network communication.
1.1 Network types
• The internet = a worldwide collection of interconnected networks (an internetwork, "network of networks"). It is owned by no single person or group; networks cooperate using common standards.
• It runs over telephone wires, fiber-optic cables, wireless links and satellite links.
• Local network sizes:
    ◦ Small home network: a few computers connected to each other and to the internet.
    ◦ SOHO (small office / home office): lets a home or remote office connect to a corporate network or shared resources.
    ◦ Medium to large network: corporations and schools, hundreds or thousands of hosts, many locations.
    ◦ World wide network: the internet itself.
• Mobile devices: smartphone, tablet, smartwatch, smart glasses.
• Connected home devices: security system, appliances, smart TV, gaming console.
• Other connected devices: smart cars, RFID tags (placed on objects/packages to track them), sensors (collect data), actuators (create physical movement), medical devices.
1.2 Data transmission
• Bit = "binary digit", the smallest piece of data, value 0 or 1. Computers only work with bits (two discrete states, like a light switch On/Off).
• Byte = 8 bits. ASCII uses 8 bits per character (A = 01000001, 9 = 00111001, # = 00100011).
• Personal data types:
    ◦ Volunteered = created and shared by you (social profile, photos).
    ◦ Observed = captured by recording your actions (cell phone location).
    ◦ Inferred = derived from analysing the other two (credit score, location/preferences worked out from card purchases).
• Three ways to send signals:
    ◦ Electrical = pulses of electricity on copper wire.
    ◦ Optical = pulses of light (frequencies/pulses of light) on fiber.
    ◦ Wireless = infrared, microwave or radio waves through the air.
• Homes/small business: copper cable or Wi-Fi. Larger networks: fiber for longer distances.
1.3 Bandwidth and throughput
• Bandwidth = capacity of a medium to carry data (theoretical), measured in bits per second.
• Units: bps -> Kbps (1,000) -> Mbps (1,000,000) -> Gbps (10^9) -> Tbps (10^12).
• Throughput = the actual bits transferred over a period of time. It is usually lower than bandwidth.
• Throughput is affected by the amount of data, the type of data, and latency (the time, including delays, for data to get from one point to another).
• Throughput cannot be faster than the slowest link in the path.
Exam traps
• Bandwidth = capacity (theory). Throughput = real transfer (includes latency effects).
• Bandwidth is measured in bits per second (not bytes).
• Three signal types: electrical, optical (light), wireless (radio/microwave/infrared). Sound waves and vibration pulses are not options.
Module 2: Network Components, Types, and Connections
Goal: explain network types, components and connections.
2.1 Clients and servers
• A host is any computer that takes part directly in network communication; it can send and receive messages.
• Hosts can act as a client, a server, or both. The software installed decides the role.
• Server = provides information/services to other devices (web server, email server, file server). Client = requests it (browser, email app).
• Peer-to-peer (P2P) network: each computer acts as both client and server (for example, a user shares a printer attached to their workstation).
    ◦ Advantages: easy to set up, less complex, low cost, good for simple tasks (file transfer, printer sharing).
    ◦ Disadvantages: no centralized administration, less secure, not scalable, can be slower.
• Client/server network: dedicated servers handle requests (needed in larger businesses with heavy traffic).
• P2P application: each device provides a user interface and runs a background service; it can be client and server.
2.2 Network components (network infrastructure)
Three categories of hardware:
Category
What it is
Examples
End devices (hosts)
The source or destination of a message; the interface between people and the network
Computers (workstations, laptops, file/web servers), network printers, IP phones, security cameras, smartphones, tablets, card readers, barcode scanners, TelePresence endpoint
Intermediary (intermediate) devices
Connect end devices and move the data
Wireless router, LAN switch, router, multilayer switch, firewall appliance
Network media
The channel the message travels on
LAN media (cable), WAN media, wireless media (radio/infrared, invisible)
• End devices use addresses to identify source and destination.
• Data originates at an end device, flows through the network, and arrives at an end device; messages can take alternate routes.
• A cable modem customer who wants to share the connection needs a wireless router (an intermediary device).
2.3 ISP connectivity options
• An ISP (Internet Service Provider) provides the link between your home network and the internet. It may be a cable company, phone company, cellular carrier, or an independent provider leasing bandwidth. Extra services: email, storage, web hosting, backup, security, VoIP.
• ISPs connect to each other in a hierarchy so traffic generally takes the shortest path. The internet backbone is high-speed fiber-optic cabling (underground and undersea).
• Modem alone connects one PC directly to the ISP but gives no protection. Integrated router (most common) = switch (wired hosts) + wireless AP (wireless hosts) + IP addressing and security for inside hosts.
Option
Key facts
Cable
Internet signal on the same coaxial cable as TV; cable modem separates signals; high bandwidth, always on
DSL
Over regular telephone line, split into 3 channels (voice, download, upload); speed depends on line quality and distance from the central office; needs a DSL modem; always on
Cellular
Uses the cell phone network; works wherever there is signal; carrier often meters data
Satellite
For places without DSL/cable; needs clear line of sight to the satellite; high equipment/installation cost; for remote areas with no wired or mobile coverage
Dial-up
Cheap, uses any phone line and a modem, low bandwidth; only when nothing faster exists
Fiber to the home
Direct fiber in cities; highest bandwidth and most services
Exam traps
• Routers/switches/firewalls = intermediary; PCs/printers/phones/servers = end devices.
• P2P advantage = ease of setup; its weaknesses are scalability, security, no central administration.
• ISP = link between a private network and the internet (not managing local networks or giving security).
Module 3: Wireless and Mobile Networks
Goal: describe the networks mobile devices use and configure them for wireless access.
3.1 Wireless networks (how a smartphone connects)
• Cellular (GSM, 3G, 4G, 4G-LTE, 5G): radio waves to antennas on towers; the call is relayed tower to tower. GSM is the most common cellular type. 3G/4G/5G are optimised for fast data. 4G still dominates.
• GPS (Global Positioning System): satellites send signals; the phone receives them and calculates its location to within about 10 meters. (Used by map apps.)
• Wi-Fi: the phone's Wi-Fi radio connects to a wireless access point to reach the LAN/internet. Wi-Fi networks are usually private; a hotspot is an area where Wi-Fi is available (often guest/public).
• Bluetooth: low-power, short-range wireless that replaces cables for accessories (speakers, headphones, mic, mouse, smartwatch). Can carry data and voice, connect several devices at once (up to 8). Uses the 2.4 GHz band.
• NFC (Near Field Communication): exchanges data when devices are a few centimeters apart or touching, using electromagnetic fields. Used for contactless payment.
Technology
Range
Typical use
Cellular 4G/5G
Tower coverage area
Calls, texts, mobile data
Wi-Fi
Within access point range
Local network and internet
Bluetooth
Short (about 100 m class 1, usually much less)
Headsets, keyboards, tethering
NFC
Under a few cm
Payments, tap to connect
GPS
Global (receive only)
Location and maps
3.2 Mobile device connectivity
• Prefer Wi-Fi over cellular: Wi-Fi data does not count against the cellular plan and Wi-Fi radios use less power.
• A mobile device is preprogrammed to use Wi-Fi first; if none is available it uses cellular data (if configured). Switching networks is mostly invisible; connections are not lost (for example 4G radio off, 3G radio on).
• Wi-Fi security precautions: never send login/password in plaintext; use a VPN for sensitive data; enable security on home networks; use WPA2 or higher.
• Manual Wi-Fi connection (needed when SSID broadcast is off or the device does not auto-connect): you need the SSID (network name) and the password/passphrase, typed exactly (case-sensitive). Android: Settings > Add network. iOS: Settings > Wi-Fi > Other.
• Cellular data on/off: Android: Settings > Mobile Networks > Data enabled. iOS: Settings > Cellular Data.
• Bluetooth uses very little power, is automatic and simple. Examples: hands-free headset, keyboard/mouse, stereo control, car speakerphone, mobile speaker, tethering.
• Tethering = a device shares its network connection with another device or computer (via Bluetooth, Wi-Fi or USB cable).
• Bluetooth pairing: turn Bluetooth radios on; one device searches; the other must be in discoverable (visible) mode. A discoverable device shares its name, Bluetooth class, services, technical info. A PIN/passkey may be asked to authenticate; it is stored so the pair reconnects automatically.
Exam traps
• To connect a Wi-Fi-only tablet to the internet you need a wireless LAN (not a 3G/4G network).
• Internet access on a mobile device: cellular and Wi-Fi (not Bluetooth/NFC/GPS).
• GPS gives location, NFC = payments, Bluetooth = headphones/accessories/tethering.
Module 4: Build a Home Network
Goal: configure an integrated wireless router and wireless client to connect securely to the internet.
4.1 Home network basics
• A home network is a small LAN. Most homes have two networks: the public side (from the ISP) and the private side (inside). The router sits between them.
• Devices on a home network: desktops, gaming systems, smart TVs, printers, scanners, security cameras, phones, climate control.
• A home router usually has two port types:
    ◦ Ethernet (LAN) ports: connect to the router's internal switch; everything on them is on the same local network. Wired LAN devices plug in here.
    ◦ Internet port (WAN port): connects to the cable or DSL modem; it is the only port on a different network by default.
• Most home routers also include a radio antenna and built-in wireless access point, so wireless devices are on the same local network as the wired ones. (So a home router provides both wired and wireless access.)
• Wireless advantages: mobility, scalability, flexibility, cost savings, faster installation, reliability in harsh environments.
4.2 Network technologies in the home
• Home wireless uses the unlicensed 2.4 GHz and 5 GHz bands. Some parts of the electromagnetic spectrum can be used without a permit.
• Bluetooth uses 2.4 GHz: low speed, short range, one-to-many; best for peripherals (mouse, keyboard, speakers).
• Wi-Fi (IEEE 802.11) also uses 2.4 and 5 GHz, but transmits at a much higher power so it has more range and throughput.
• Wi-Fi, Bluetooth and cordless phones do NOT all use the same range: Wi-Fi (802.11) and Bluetooth use 2.4/5 GHz, but cordless phones use 902-928 MHz in the course figure. So "they all use the same frequency ranges" is FALSE.
• Wired: Ethernet is the most common wired protocol. Directly connected devices use an Ethernet patch cable (usually UTP, RJ-45 connectors). Powerline is an option when there is no UTP wiring.
    ◦ Cat 5e: most common LAN cable, 4 pairs of twisted wires (twisting reduces interference).
    ◦ Coaxial: inner wire, then insulating layer, then a conducting shield, then a jacket.
    ◦ Fiber-optic: glass or plastic, about the diameter of a hair, very high bandwidth over long distance.
4.3 Wireless standards
• IEEE creates the wireless standards (IEEE 802.11 governs WLANs). The Wi-Fi Alliance tests wireless LAN devices from different makers; the Wi-Fi logo means the device meets standards and interoperates.
• Router wireless settings:
    ◦ Network mode - which 802.11 standard(s): 802.11b/g/n or Mixed (legacy) mode.
    ◦ SSID (Service Set Identifier) - the network name. Case-sensitive, alphanumeric, up to 32 characters, sent in the header of all frames. Identifies the specific WLAN.
    ◦ Standard channel - default Auto (the AP picks the best).
    ◦ SSID broadcast - default Enabled. If disabled, you must type the SSID manually.
• If all devices use the same standard, you get max speed for that standard. If the AP accepts only one standard, devices not using it cannot connect. Mixed mode lets older devices connect (but may reduce speed). If devices use different standards, do not set the network to the highest standard (older devices would be locked out).
• Turning off SSID broadcast is not enough security. Use the strongest encryption available.
4.4 Set up a home router
• First-time setup: connect a PC with an Ethernet patch cable to a LAN port (never the Internet port). The PC normally gets an IP address from the router's DHCP server. If not, set a unique IP address, subnet mask, default gateway and DNS manually.
• A cable modem has a coaxial connector; a DSL line uses an RJ-11 telephone-type port.
• Design questions before configuring: What should the network be called? What types of devices will attach? How will new devices be added?
    ◦ Don't put the device model or brand in the SSID (default settings and weaknesses are easy to find online).
    ◦ Older devices (only 802.11b/g) need legacy/mixed mode.
    ◦ Guest SSID/guest access = open access restricted to the internet only.
    ◦ MAC address filtering = only listed devices can join (more secure, less flexible).
    ◦ Encryption is what stops outsiders using your network.
Exam traps
• Internet port = WAN port (to the modem). LAN devices go in the Ethernet/switch ports.
• IEEE writes standards; Wi-Fi Alliance tests devices; IETF writes RFCs.
• Default SSID broadcast = Enabled; default channel = Auto.
• SSID is case sensitive, up to 32 chars (not 16, not encrypted by default).
• Guest access = guest SSID.
Module 5: Communication Principles
Goal: explain why standards and protocols matter in network communication.
5.1 Communication protocols
• Protocol = a rule that lets two sides communicate. Human example: agree on the method (sign, write, speak), the language, and confirmation that the message was understood. A local network is where all hosts "speak the same language" = share a common protocol.
• Human protocol elements: identified sender and receiver, agreed method, common language and grammar, speed and timing, confirmation/acknowledgment.
• Six network protocol characteristics:
Characteristic
Meaning
Remember
Message format
Messages must use a specific structure; depends on message type and channel
Ethernet frame: destination MAC comes before source MAC
Message size
Strict limits; long messages are broken into smaller pieces
Ethernet frame 64 to 1518 bytes
Timing
Speed of bit transmission, when a host can send, and how much it can send
Flow control, response timeout
Encoding
Message converted to bits, then each bit is encoded as sound, light or electrical pulses (depends on media)
Receiver decodes
Encapsulation
Adding a header with source and destination addressing to each piece of data
Header contains addresses
Message pattern
Request/response (needs acknowledgment) or simply streamed with no acknowledgment
Acknowledged vs unacknowledged
• Question trap: a field order inside an Ethernet frame (destination MAC before source MAC) is encapsulation/format; frame size 64-1518 bytes is message size; turning into bits for sending is encoding.
5.2 Communication standards
• A standard = a set of rules that determines how something must be done. Standards make sure all devices use the same protocols in the same way, so different device types can exchange information (a PC can send an email that a phone can read).
• An internet standard is the result of discussion, problem solving and testing. Each stage is recorded in a numbered RFC (Request for Comments). RFCs for internet standards are published and managed by the IETF (Internet Engineering Task Force).
• Other organizations in the course figure: IEEE (e.g. 802.11, Ethernet), IETF, IANA (addresses/numbers), ICANN (domain names), ITU, TIA (cabling).
• "Device in a bubble": a device only sees its own addressing information; protocols tell it whether another device is on the same network. Most communication is broken into smaller units called packets.
5.3 Network communication models
• Protocol stack: protocols shown as layers; each upper layer depends on services below; layers operate independently. Examples of protocols: HTTP, TCP, IP, Ethernet.
• Benefits of a layered model: helps protocol design, fosters competition (multi-vendor interoperability), technology changes in one layer do not affect others, gives a common language to describe networking.
• Protocol model (TCP/IP) matches a specific protocol suite. Reference model (OSI) describes functions of each layer but not exactly how; used for design, specifications and troubleshooting.
TCP/IP (internet) model - 4 layers
TCP/IP layer
Job
Application
Presents data to the user, plus encoding and dialog control
Transport
Supports communication between devices across diverse networks
Internet
Determines the best path through the network
Network Access
Controls the hardware devices and media
OSI model - 7 layers
#
OSI layer
Job
7
Application
Protocols for process-to-process communication
6
Presentation
Common representation of data between application services
5
Session
Organizes dialogue and manages data exchange
4
Transport
Segments, transfers and reassembles data between end devices
3
Network
Exchanges pieces of data between identified end devices (IP addressing, routing)
2
Data Link
Exchanges frames over a common media
1
Physical
Mechanical, electrical, functional and procedural means to activate, maintain and de-activate physical connections for bit transmission
Mapping: OSI 7+6+5 = TCP/IP Application; OSI 4 = Transport; OSI 3 = Internet; OSI 2+1 (Data link + Physical) = Network Access.
• Memory trick (top to bottom): All People Seem To Need Data Processing.
• Which protocol does what: HTTP = application layer; TCP = guaranteed/reliable delivery (transport); IP = used by routers to forward messages (internet/network layer, addressing); Ethernet = data link/physical access.
• The OSI model is used for Layers 1 and 2 discussion because TCP/IP does not describe the media access and physical means.
Exam traps
• IP addressing = OSI Layer 3 (Network). Ethernet = Layer 2 (Data Link). TCP = Layer 4 (Transport).
• Two OSI layers that map to TCP/IP Network Access = Data Link + Physical.
• RFC = Request for Comments, kept by the IETF.
Module 6: Network Media
Goal: describe common network media.
6.1 Network media types
• Media = the channel a message travels on from source to destination. Three types of media:
Media
How data is encoded
Metal (copper) wires inside cables
Electrical impulses
Glass or plastic fibers (fiber-optic cable)
Pulses of light
Wireless transmission
Modulation of specific frequencies of electromagnetic waves
• Four criteria for choosing media:
    1. Maximum distance the media can carry a signal successfully.
    2. The environment where it will be installed.
    3. The amount of data and speed required.
    4. The cost of the media and installation.
    ◦ (The type of data is not a criterion.)
Three common cables
Cable
Facts
Where
Twisted-pair
Wires grouped in pairs and twisted to reduce interference; pairs are colour coded (solid + striped). Most common Ethernet cable
Connects end devices to an Ethernet LAN
Coaxial
Single rigid copper core, insulation, braided metal shield, jacket. High-frequency/broadband signals
Cable TV companies (set-top box), satellite systems
Fiber-optic
Glass or plastic, as thin as a hair. Very high bandwidth, very long distance; light is not affected by electrical interference
Backbone networks, large enterprises, data centers, phone companies; also medical imaging
Exam traps
• Twisted-pair = LAN (Ethernet). Coax = cable TV. Fiber = high speed, long distance.
• Copper = electrical signals; fiber = light; wireless = radio waves (EM frequencies).
• Fiber is immune to electrical interference; copper is not.
Module 7: The Access Layer
Goal: explain how communication occurs on Ethernet networks.
7.1 Encapsulation and the Ethernet frame
• Ethernet = the technology commonly used in LANs. A device connects through an Ethernet NIC (Network Interface Card). Each NIC has a unique MAC (Media Access Control) address permanently built in. Source and destination MAC addresses are fields in the Ethernet frame.
• Encapsulation = placing one message format inside another (letter inside an envelope). De-encapsulation = the receiver reverses it (removes the envelope).
• Data is encapsulated in a frame before it goes on the network. The frame is the envelope: it has the destination address and source address. A badly formatted message is not delivered or processed.
• IP works like the envelope too at the network layer (an IPv6 packet header is 40 bytes and carries source and destination IP addresses).
• Ethernet frame fields (in order):
Field
Purpose
Preamble + SFD (Start Frame Delimiter)
Sequencing/timing; marks the beginning of the frame
Destination MAC address
Which NIC on this network should receive the frame (comes first)
Source MAC address
The NIC that sent the frame
Type/Length
Length and type of the frame (which protocol is inside)
Data
The encapsulated payload
FCS (Frame Check Sequence)
Detects transmission errors (at the end)
• Frame size is typically 64 to 1518 bytes.
• Ethernet works at OSI Layer 2 (Data Link); the destination MAC is the NIC of the device on this network (the next hop, not necessarily the final host).
7.2 The access layer
• Access layer = where people gain access to other hosts and shared files/printers. It is the first line of devices that connect hosts to the wired Ethernet network (hosts connect with Ethernet cables).
• Hub (obsolete): many ports, but only one message at a time. Two messages at once cause a collision; retransmissions clog the network. Hubs are obsolete and replaced by switches.
• Ethernet switch (Layer 2):
    ◦ Reads the destination MAC address of each frame and checks its MAC address table.
    ◦ The table lists the active ports and the host MAC addresses attached to them.
    ◦ If the destination MAC is in the table, the switch builds a temporary circuit between the source and destination ports and sends it only there.
    ◦ If the destination MAC is not in the table, the switch floods the frame out all ports except the one it came in on.
    ◦ The switch learns by examining the source MAC address of every frame; it adds/updates the entry (MAC -> port) dynamically.
    ◦ Switches allow sending and receiving on the same cable at the same time (full duplex), which eliminates collisions.
Switch cheat rule
• Learn from the SOURCE MAC. Forward by the DESTINATION MAC. Unknown destination = flood to all ports except the incoming port.
Exam traps
• Switch forwarding decision = destination MAC address. Table entries come from the source MAC address.
• Hubs = obsolete. Switches work at Layer 2.
• The beginning of a frame is marked by the preamble and SFD; FCS checks for errors.
One-page cheat sheet (read this last)
Topic
Remember
Internet owner
Nobody (network of networks)
Bit / Byte
0 or 1 / 8 bits (ASCII = 8 bits per character)
Signals
Electrical (copper), Optical (light, fiber), Wireless (radio/microwave/infrared)
Personal data
Volunteered (you share), Observed (recorded actions), Inferred (derived, e.g. credit score)
Bandwidth vs throughput
Bandwidth = capacity (bits/s, theory). Throughput = actual, affected by latency, limited by slowest link
Units
bps, Kbps (10^3), Mbps (10^6), Gbps (10^9), Tbps (10^12)
Sensor / actuator / RFID
collects data / creates movement / tracks objects
End vs intermediary vs media
PC, phone, printer, server / router, switch, firewall, wireless router / LAN, WAN, wireless
P2P
Easy, cheap, no central admin, not scalable, less secure
ISP options
Cable (TV coax), DSL (phone line, distance matters), Cellular (metered), Satellite (line of sight, remote), Dial-up (slow), Fiber
Mobile wireless
GPS (location, receives), NFC (cm, payment), Bluetooth (short range, up to 8, pairing, PIN), Wi-Fi (AP), Cellular (GSM, 4G/5G)
Manual Wi-Fi join
SSID + password (case sensitive)
Tethering
Sharing your connection (Bluetooth, Wi-Fi or USB)
Wi-Fi security
WPA2 or higher, VPN, no plaintext passwords
Router ports
LAN/Ethernet = internal switch. Internet (WAN) = to the modem
Wi-Fi bands
Unlicensed 2.4 GHz and 5 GHz; IEEE 802.11
Wi-Fi Alliance / IEEE
Alliance tests devices; IEEE writes standards
SSID
Case sensitive, up to 32 characters, broadcast Enabled by default; hiding it is not security
Router settings
Network mode, SSID, channel (Auto), SSID broadcast. Guest = guest SSID. Encryption stops outsiders
Cat 5e
4 twisted pairs, UTP, RJ-45
Protocol characteristics
Format, size, timing, encoding, encapsulation, message pattern
Standards
RFC = Request for Comments, published by the IETF
TCP/IP (4)
Application, Transport, Internet, Network Access
OSI (7)
7 App, 6 Presentation, 5 Session, 4 Transport, 3 Network, 2 Data Link, 1 Physical
OSI to TCP/IP
7-6-5 = Application; 4 = Transport; 3 = Internet; 2-1 = Network Access
Key protocols
HTTP (application), TCP (reliable), IP (routers, Layer 3), Ethernet (Layer 2)
Media
Copper = electrical, Fiber = light, Wireless = EM waves. Choose by distance, environment, speed/amount, cost
Cables
Twisted-pair = Ethernet LAN, Coax = cable TV, Fiber = long distance, high speed, no EMI
Encapsulation
Message inside another format (letter in envelope); reverse = de-encapsulation
Ethernet frame
Preamble+SFD, Destination MAC, Source MAC, Type/Length, Data, FCS (error check). 64 to 1518 bytes
Switch
Layer 2. Learns source MAC, forwards by destination MAC, unknown = flood all ports except incoming
Hub
Obsolete, one message at a time, collisions
MCQ practice bank (75 questions)
Answers and one-line explanations are in the next section. Try all questions first. Questions are grouped by module in the same order as the course; several are adapted from the Check Your Understanding items on the site.
Module 1: Communication in a Connected World
1. Who owns the internet?
• a) Cisco
• b) The United States government
• c) No single person or group
• d) The Internet Society
Answer: c)
2. A bit can have how many possible values?
• a) Two (0 or 1)
• b) Eight (1 to 8)
• c) 256 (0 to 255)
• d) Three (true, false, null)
Answer: a)
3. A byte consists of how many bits?
• a) 4
• b) 16
• c) 32
• d) 8
Answer: d)
4. Which method of signal transmission uses pulses of light?
• a) Electrical signals
• b) Wireless signals
• c) Optical signals
• d) Acoustic signals
Answer: c)
5. A credit score that is calculated by analysing your purchases and payments is which type of personal data?
• a) Volunteered data
• b) Inferred data
• c) Observed data
• d) Public data
Answer: b)
6. Bandwidth is measured in:
• a) bytes per second
• b) hertz
• c) bits per second
• d) packets per hour
Answer: c)
7. Which measure of data transfer includes the effect of latency and is usually lower than the rated bandwidth?
• a) Bandwidth
• b) Throughput
• c) Capacity
• d) Baud rate
Answer: b)
8. Which connected device is able to create physical movement?
• a) RFID tag
• b) Sensor
• c) Game console
• d) Actuator
Answer: d)
9. Which type of network lets a home office or remote office connect to a corporate network?
• a) Small home network
• b) SOHO network
• c) World wide network
• d) Medium to large network
Answer: b)
10. 1 Mbps is equal to:
• a) 1,000 bps
• b) 1,000,000 bps
• c) 1,000,000,000 bps
• d) 100,000 bps
Answer: b)
11. In a path made of several links, the throughput cannot be faster than the:
• a) fastest link
• b) average of all links
• c) first link
• d) slowest link
Answer: d)
Module 2: Network Components, Types, and Connections
12. Which device is the source or destination of a message sent over the network?
• a) Intermediary device
• b) Network medium
• c) End device (host)
• d) Firewall
Answer: c)
13. Which of these is an intermediary device?
• a) Smartphone
• b) Network printer
• c) IP phone
• d) Firewall appliance
Answer: d)
14. What type of network is formed by two computers that can both send and receive requests for resources?
• a) Client/server
• b) Peer-to-peer
• c) Campus
• d) Enterprise
Answer: b)
15. Which is an advantage of a peer-to-peer network?
• a) Centralized administration
• b) Scalability
• c) High level of security
• d) Ease of setup
Answer: d)
16. What decides whether a computer acts as a client, a server or both?
• a) The type of cable
• b) The software installed on it
• c) The size of its screen
• d) The ISP
Answer: b)
17. Which internet connection runs over a regular telephone line and is split into voice, download and upload channels?
• a) Cable
• b) Satellite
• c) DSL
• d) Fiber to the home
Answer: c)
18. Which internet service carries the data signal on the same coaxial cable that delivers cable TV?
• a) Cable
• b) DSL
• c) Cellular
• d) Satellite
Answer: a)
19. Which connection suits a residence in a remote area with no wired or mobile coverage?
• a) Dial-up
• b) Cellular
• c) DSL
• d) Satellite
Answer: d)
20. Which term correctly describes the function of an ISP?
• a) Manages the local network
• b) Provides the link between a private network and the internet
• c) Provides security on private networks
• d) Maintains SOHO networks
Answer: b)
21. What is the most common way a home user connects to an ISP?
• a) A PC plugged straight into the modem
• b) A hub
• c) A wireless integrated router
• d) A firewall only
Answer: c)
22. Wired LAN media, WAN media and wireless media belong to which category of network components?
• a) End devices
• b) Intermediary devices
• c) Peripherals
• d) Network media
Answer: d)
Module 3: Wireless and Mobile Networks
23. Which technology lets a smartphone calculate its location from satellite signals?
• a) NFC
• b) Bluetooth
• c) GPS
• d) Wi-Fi
Answer: c)
24. Which wireless technology lets a smartphone pay at a terminal that is a few centimeters away?
• a) GPS
• b) NFC
• c) Bluetooth
• d) 4G
Answer: b)
25. Which low-power, short-range technology replaces cables for speakers, headphones and a mouse?
• a) Bluetooth
• b) NFC
• c) GPS
• d) Wi-Fi
Answer: a)
26. A mobile device that is in range of a known Wi-Fi network and also has cellular data enabled will normally:
• a) Use cellular first
• b) Use Wi-Fi first, then cellular if no Wi-Fi is available
• c) Use Bluetooth first
• d) Use NFC first
Answer: b)
27. What is it called when a device shares its network connection with another device or computer?
• a) Pairing
• b) Syncing
• c) Roaming
• d) Tethering
Answer: d)
28. Which two items must you provide to join a secured Wi-Fi network manually?
• a) IP address and MAC address
• b) SSID and password
• c) Username and IP address
• d) PIN and Bluetooth class
Answer: b)
29. Which is a recommended precaution on a Wi-Fi network?
• a) Send logins in plaintext
• b) Turn off encryption
• c) Use a VPN for sensitive data
• d) Turn off all security on the home network
Answer: c)
30. Why is it better to use Wi-Fi than a cellular connection when possible?
• a) It does not count against the data plan and uses less battery
• b) It always has a longer range
• c) It never needs a password
• d) It works without a router
Answer: a)
31. What is the maximum number of Bluetooth devices that can be connected together at one time?
• a) 2
• b) 4
• c) 8
• d) 32
Answer: c)
32. For two Bluetooth devices to pair, one must be set to which mode?
• a) Airplane mode
• b) Discoverable (visible) mode
• c) Tethering mode
• d) Hotspot mode
Answer: b)
Module 4: Build a Home Network
33. The Internet (WAN) port of a home router is normally connected to the:
• a) wireless access point
• b) cable or DSL modem
• c) PC
• d) printer
Answer: b)
34. Which wireless technology is based on the IEEE 802.11 standards?
• a) Wi-Fi
• b) Bluetooth
• c) NFC
• d) Cellular
Answer: a)
35. Which organization tests wireless LAN devices from different manufacturers?
• a) IEEE
• b) Wi-Fi Alliance
• c) IETF
• d) ICANN
Answer: b)
36. Which statement about the SSID is true?
• a) It is not case sensitive and has a maximum of 8 characters
• b) It is case sensitive and can be up to 32 characters
• c) It is exactly 16 characters and encrypted by default
• d) It is needed only for guest access
Answer: b)
37. What is the default SSID Broadcast setting on a wireless router?
• a) Disabled
• b) Auto
• c) Off
• d) Enabled
Answer: d)
38. Which router setting stops outsiders from using your wireless network?
• a) A shorter SSID
• b) Encryption
• c) Changing the router location
• d) Changing the IP address
Answer: b)
39. Which feature lets visitors use only the internet and nothing else on your network?
• a) MAC address filtering
• b) Guest SSID
• c) Legacy mode
• d) Channel selection
Answer: b)
40. Category 5e cable is made of:
• a) 2 pairs of twisted wires
• b) 4 pairs of twisted wires
• c) A single copper core with a shield
• d) Glass fibers
Answer: b)
41. Which two frequency bands do home Wi-Fi networks use without a license?
• a) 900 MHz and 1.8 GHz
• b) AM and FM
• c) 2.4 GHz and 5 GHz
• d) 60 GHz and 5 THz
Answer: c)
42. Turning off SSID broadcast is:
• a) Enough to secure a wireless network
• b) Not enough, you still need strong encryption
• c) Required by the 802.11 standard
• d) Illegal in most countries
Answer: b)
43. During first-time setup, a PC should be connected with an Ethernet cable to which router port?
• a) A LAN (Ethernet) port
• b) The Internet port
• c) The USB port
• d) The antenna port
Answer: a)
44. What is the purpose of mixed (legacy) mode on a wireless router?
• a) Disable encryption
• b) Double the range
• c) Allow devices that use older 802.11 standards to connect
• d) Hide the SSID
Answer: c)
Module 5: Communication Principles
45. Which protocol characteristic is the conversion of a message into bits that are then sent as light, electrical or radio signals?
• a) Message size
• b) Timing
• c) Encoding
• d) Message pattern
Answer: c)
46. What is encapsulation?
• a) Converting bits to light pulses
• b) Adding a header with source and destination addressing to the data
• c) Splitting a message into smaller pieces
• d) Waiting for an acknowledgment
Answer: b)
47. An Ethernet frame is typically 64 to 1518 bytes. Which protocol characteristic does this describe?
• a) Timing
• b) Message pattern
• c) Message size
• d) Encoding
Answer: c)
48. RFC documents for internet standards are published and managed by which organization?
• a) IEEE
• b) IETF
• c) ICANN
• d) TIA
Answer: b)
49. How many layers does the TCP/IP model have?
• a) 3
• b) 4
• c) 5
• d) 7
Answer: b)
50. How many layers does the OSI model have?
• a) 4
• b) 5
• c) 6
• d) 7
Answer: d)
51. IP addressing happens at which OSI layer?
• a) Data Link
• b) Transport
• c) Network
• d) Session
Answer: c)
52. Which two OSI layers map to the single TCP/IP Network Access layer?
• a) Data Link and Physical
• b) Network and Transport
• c) Session and Presentation
• d) Application and Presentation
Answer: a)
53. Which protocol is responsible for guaranteeing reliable delivery?
• a) IP
• b) HTTP
• c) Ethernet
• d) TCP
Answer: d)
54. Which is a benefit of a layered model?
• a) It fosters competition because products from different vendors can work together
• b) It forces everyone to use one vendor
• c) A change in one layer forces changes in all layers
• d) It removes the need for protocols
Answer: a)
55. Which of these is a reference model rather than a protocol model?
• a) TCP/IP
• b) OSI
• c) HTTP
• d) Ethernet
Answer: b)
56. What does the TCP/IP Internet layer do?
• a) Presents data to the user
• b) Determines the best path through the network
• c) Controls the hardware and media
• d) Encodes bits into signals
Answer: b)
57. What does the OSI Session layer do?
• a) Segments data
• b) Exchanges frames over common media
• c) Organizes dialogue and manages data exchange
• d) Defines physical connectors
Answer: c)
58. A request/response exchange where the next message waits for an acknowledgment is an example of:
• a) Encoding
• b) Message pattern
• c) Timing
• d) Message format
Answer: b)
59. Which protocol is used by routers to forward messages?
• a) TCP
• b) HTTP
• c) IP
• d) Ethernet
Answer: c)
Module 6: Network Media
60. In copper cable, data is encoded as:
• a) Pulses of light
• b) Electrical impulses
• c) Modulated radio waves
• d) Sound waves
Answer: b)
61. In fiber-optic cable, data is encoded as:
• a) Pulses of light
• b) Electrical impulses
• c) Modulated radio waves
• d) Magnetic pulses
Answer: a)
62. Which is NOT one of the criteria for choosing network media?
• a) Maximum distance the signal can travel
• b) Environment of installation
• c) Cost of media and installation
• d) The type of data being sent
Answer: d)
63. Which cable do TV companies use to connect a set-top box in the home?
• a) Twisted-pair
• b) Coaxial
• c) Fiber-optic
• d) Serial
Answer: b)
64. Which cable carries digital information at very high speeds over long distances and is not affected by electrical interference?
• a) Coaxial
• b) Twisted-pair
• c) Fiber-optic
• d) Cat 5
Answer: c)
65. What is the most common wired media for connecting end devices to an Ethernet LAN?
• a) Twisted-pair
• b) Coaxial
• c) Fiber-optic
• d) Serial
Answer: a)
Module 7: The Access Layer
66. What is encapsulation?
• a) Placing one message format inside another
• b) Compressing data
• c) Encrypting data
• d) Splitting a cable
Answer: a)
67. An Ethernet switch makes its forwarding decision based on which field?
• a) Source MAC address
• b) FCS
• c) Destination MAC address
• d) Type/Length
Answer: c)
68. An Ethernet switch adds entries to its MAC address table based on which field?
• a) Destination MAC address
• b) Source MAC address
• c) FCS
• d) Preamble
Answer: b)
69. A switch receives a frame whose destination MAC address is not in its MAC address table. What does it do?
• a) Drops the frame
• b) Sends it out only the first port
• c) Floods it out all ports except the one it arrived on
• d) Adds the destination address to the table
Answer: c)
70. Ethernet hubs are considered:
• a) Cutting-edge
• b) Wireless devices
• c) Security devices
• d) Obsolete
Answer: d)
71. At which OSI layer does Ethernet operate?
• a) Layer 4 (Transport)
• b) Layer 3 (Network)
• c) Layer 2 (Data Link)
• d) Layer 1 (Physical)
Answer: c)
72. What i         
s the purpose of the FCS field in an Ethernet frame?
• a) To carry the destination address
• b) To detect transmission errors
• c) To mark the beginning of the frame
• d) To carry the payload
Answer: b)
73. A MAC address is:
• a) A unique address permanently embedded in the NIC
• b) Assigned by DHCP
• c) Changed whenever the IP changes
• d) Used only on wireless networks
Answer: a)
74. Which Ethernet frame fields indicate the beginning of the frame?
• a) FCS
• b) Preamble and SFD
• c) Destination MAC address
• d) Type/Length
Answer: b)
75. Which device allows only one message at a time and causes a collision when two messages are sent together?
• a) Switch
• b) Router
• c) Hub
• d) Firewall
Answer: c)
Answer key with explanations
Q
Ans
Why
1
c
The internet is a collection of cooperating networks, owned by no one.
2
a
A bit is a binary digit: 0 or 1.
3
d
1 byte = 8 bits.
4
c
Optical signals = pulses of light on fiber.
5
b
Inferred data is derived from volunteered/observed data.
6
c
Bandwidth is bits per second.
7
b
Throughput is the real transfer and includes latency effects.
8
d
Actuators create physical movement; sensors collect data.
9
b
SOHO networks connect home/remote offices to a corporate network.
10
b
1 Mbps = 1,000,000 bps.
11
d
Throughput is limited by the slowest link.
12
c
End devices (hosts) are the source or destination of messages.
13
d
Firewalls, routers, switches are intermediary devices.
14
b
Both sides send and receive requests = peer-to-peer.
15
d
P2P is easy to set up; it lacks scalability, security and central admin.
16
b
The installed software decides client, server or both.
17
c
DSL uses the telephone line (voice, download, upload channels).
18
a
Cable uses the same coaxial cable as TV.
19
d
Satellite works where no wired or mobile coverage exists.
20
b
An ISP links your private network to the internet.
21
c
A wireless integrated router (switch + AP + addressing + security) is most common.
22
d
LAN, WAN and wireless are network media.
23
c
GPS receives satellite signals to calculate location (about 10 m).
24
b
NFC works within a few cm (contactless payment).
25
a
Bluetooth = low power, short range, replaces cables for accessories.
26
b
Devices use Wi-Fi first, then cellular if no Wi-Fi.
27
d
Sharing a connection with another device is tethering.
28
b
Manual join needs the SSID and the password.
29
c
Use a VPN (and WPA2 or higher); never send plaintext logins.
30
a
Wi-Fi data does not count against the plan and uses less power.
31
c
Up to eight Bluetooth devices at once.
32
b
The other device must be discoverable (visible).
33
b
The Internet port connects to the cable/DSL modem.
34
a
Wi-Fi is IEEE 802.11.
35
b
The Wi-Fi Alliance tests devices for interoperability.
36
b
SSID: case sensitive, up to 32 characters.
37
d
SSID broadcast defaults to Enabled.
38
b
Encryption stops outsiders using the network.
39
b
A guest SSID gives internet-only access.
40
b
Cat 5e has 4 twisted pairs.
41
c
Home Wi-Fi uses unlicensed 2.4 GHz and 5 GHz.
42
b
Hiding the SSID is not enough; use strong encryption.
43
a
Plug into a LAN/Ethernet port, never the Internet port.
44
c
Mixed/legacy mode lets older 802.11 devices connect.
45
c
Encoding converts bits into light, electrical or radio signals.
46
b
Encapsulation adds a header with source/destination addresses.
47
c
Frame size limits are message size.
48
b
The IETF publishes and manages RFCs.
49
b
TCP/IP has 4 layers.
50
d
OSI has 7 layers.
51
c
IP addressing is OSI Layer 3, Network.
52
a
Data Link + Physical = Network Access.
53
d
TCP guarantees reliable delivery.
54
a
Layering fosters competition and interoperability.
55
b
OSI is a reference model; TCP/IP is a protocol model.
56
b
Internet layer determines the best path.
57
c
Session layer organizes dialogue and manages data exchange.
58
b
Request/response with acknowledgment = message pattern.
59
c
Routers forward messages using IP.
60
b
Copper carries electrical impulses.
61
a
Fiber carries pulses of light.
62
d
The four criteria are distance, environment, data amount/speed, and cost; type of data is not one.
63
b
TV companies use coaxial cable.
64
c
Fiber: high speed, long distance, no electrical interference.
65
a
Twisted-pair is the standard Ethernet LAN cable.
66
a
Encapsulation places one message format inside another (letter in envelope).
67
c
Switches forward by destination MAC.
68
b
Switches learn from the source MAC.
69
c
Unknown destination = flood to all ports except the incoming one.
70
d
Hubs are obsolete, replaced by switches.
71
c
Ethernet is Layer 2, Data Link.
72
b
FCS detects transmission errors.
73
a
A MAC address is permanently embedded in the NIC.
74
b
Preamble and SFD mark the start of the frame.
75
c
A hub sends one message at a time; simultaneous messages collide.
Answer count by letter: a = 12, b = 29, c = 21, d = 13 (b shows up most, but do not rely on guessing patterns).