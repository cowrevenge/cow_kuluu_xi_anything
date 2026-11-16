/* f_0x100af180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100af180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 - 0x7fffffc0u > 0x35u) goto L_100af245;
    t1 = rd32(COW_IMG(0x100af25cu) + rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u) * 4u);
    switch (t1 - RD)
    {
    case 0x100af1a2u: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1a2;
    case 0x100af1bfu: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1bf;
    case 0x100af1c8u: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1c8;
    case 0x100af1d1u: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1d1;
    case 0x100af1dau: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1da;
    case 0x100af1e3u: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1e3;
    case 0x100af1ecu: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1ec;
    case 0x100af1f1u: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af1f1;
    case 0x100af21bu: edx = rd8(COW_IMG(0x100af284u) + arg1 - 0x7fffffc0u); goto L_100af21b;
    case 0x100af245u: goto L_100af245;
    default: rt_fatal(g, COW_IMG(0x100af19bu), "switch");
    }
    return 0;
L_100af1a2: ;
    g->edx = edx;
    g->esp = sp0;
    t12 = cow_stdcall(g, COW_IMG(0x100fc510u), 0);
    t13 = g->edx;
    t14 = rd32(t12 + 4u);
    wr32(arg2, t14);
    t15 = cow_stdcall(g, COW_IMG(0x100fc2e0u), 0);
    wr16(arg3, (uint16_t)t15);
    return (t15 & 0xffffff00u) | 1u;
L_100af1bf: ;
    g->esp = sp0;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), arg1 - 0x7fffffc0u, 1, 1u);
    eax = t9;
L_100af1fa: ;
    if (eax != 0u) goto L_100af204;
    return eax & 0xffffff00u;
L_100af1c8: ;
    g->esp = sp0;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), arg1 - 0x7fffffc0u, 1, 2u);
    eax = t7;
L_100af224: ;
    if (eax != 0u) goto L_100af22e;
    return eax & 0xffffff00u;
L_100af1d1: ;
    g->esp = sp0;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), arg1 - 0x7fffffc0u, 1, 3u);
    eax = t6;
    goto L_100af1fa;
L_100af1da: ;
    g->esp = sp0;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), arg1 - 0x7fffffc0u, 1, 4u);
    eax = t5;
    goto L_100af224;
L_100af1e3: ;
    g->esp = sp0;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x100ae9e0u), arg1 - 0x7fffffc0u, 1, 5u);
    eax = t4;
    goto L_100af1fa;
L_100af1ec: ;
    eax = arg1 + 0x40u;
L_100af21e: ;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x100e8df0u), 1, eax);
    eax = t3;
    goto L_100af224;
L_100af1f1: ;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x100e8df0u), 1, arg1 + 0x44u);
    eax = t2;
    goto L_100af1fa;
L_100af204: ;
    t10 = rd32(eax + 0x14u);
    wr32(arg2, t10);
    t11 = rd16(eax + 0x18u);
    wr16(arg3, (uint16_t)t11);
    return (((eax & 0xffff0000u) | t11) & 0xffffff00u) | 1u;
L_100af21b: ;
    eax = arg1 + 0x48u;
    goto L_100af21e;
L_100af22e: ;
    t8 = rd32(eax + 0x14u);
    wr32(arg2, t8);
    wr16(arg3, rd16(eax + 0x18u));
    return (arg3 & 0xffffff00u) | 1u;
L_100af245: ;
    wr32(arg2, arg1);
    wr16(arg3, arg1 & 0x3ffu);
    return (arg1 & 0x300u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100af180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100af180(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
