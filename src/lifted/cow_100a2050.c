/* f_0x100a2050 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a2050(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(arg3 + 4u);
    if ((uint8_t)t1 > 4u)
    {
        eax = (uint8_t)t1;
        edx = in_edx;
        goto L_100a20dc;
    }
    eax = (uint8_t)t1;
    ecx = t1;
    t2 = rd32(COW_IMG(0x100a20e0u) + eax * 4u);
    switch (t2 - RD)
    {
    case 0x100a206au: goto L_100a206a;
    case 0x100a2093u: goto L_100a2093;
    case 0x100a209du: goto L_100a209d;
    case 0x100a20cbu: goto L_100a20cb;
    case 0x100a20d5u: goto L_100a20d5;
    default: rt_fatal(g, COW_IMG(0x100a2063u), "switch");
    }
    return 0;
L_100a206a: ;
    if (((rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u))) >> 8u & 0x20u) != 0u)
    {
        edx = rd32(COW_IMG(0x1047fb40u));
        goto L_100a20dc;
    }
    ecx = rd32(COW_IMG(0x104808fcu)) | rd32(COW_IMG(0x1047fb40u));
    edx = rd32(COW_IMG(0x1047fb40u));
    wr8(COW_IMG(0x10482f18u), 0u);
    wr8(COW_IMG(0x10485a70u), 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t3 = cow_stdcall(g, COW_IMG(0x100875c0u), 0);
    t4 = g->edx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_100a2093: ;
    wr8(COW_IMG(0x104855a8u), 0u);
    return (eax & 0xffffff00u) | 1u;
L_100a209d: ;
    if (rd8(COW_IMG(0x10487e48u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
        edx = in_edx;
        goto L_100a20dc;
    }
    if (ecx >> 8u != rd16(COW_IMG(0x1047fb3au)))
    {
        eax = ecx >> 8u;
        edx = rd16(COW_IMG(0x1047fb3au));
        goto L_100a20dc;
    }
    eax = ecx >> 8u;
    edx = rd16(COW_IMG(0x1047fb3au));
    wr16(COW_IMG(0x10485578u), (uint16_t)eax);
    wr32(COW_IMG(0x10482f20u), 1u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100a20cb: ;
    wr8(COW_IMG(0x1047fab0u), 0u);
    return (eax & 0xffffff00u) | 1u;
L_100a20d5: ;
    wr8(COW_IMG(0x10487e49u), 0u);
    edx = in_edx;
L_100a20dc: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a2050(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a2050(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
