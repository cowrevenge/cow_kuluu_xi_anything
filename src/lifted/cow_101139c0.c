/* f_0x101139c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101139c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x14u, 0u);
    t1 = rd32(sp0 + 0xcu);
    t2 = rd32(arg1 + 0x80cu);
    wr32(sp0 + 0xcu, t1);
    t3 = rd32(t2 + 4u);
    wr32(t1 + 4u, t3);
    t4 = rd32(arg1 + 0x8f0u);
    wr32(sp0 - 0x1cu, t4);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1010f570u), sp0 - 0x10u, 1, t4);
    eax = t1 + 8u - arg2 + 4u;
    ecx = rd32(sp0 - 8u);
    ebx = t1 + 8u;
L_10113a0d: ;
    if (rd32(ecx + 4u) == 0u) goto L_10113a42;
    if (rd32(ecx + 8u) == 0u) goto L_10113a42;
    if (eax >= 0x104u) goto L_10113a42;
    t5 = rd32(rd32(rd32(ecx) + 4u) + 4u);
    wr32(ebx, t5);
    if (rd32(ecx + 8u) == 0u)
    {
        eax = eax + 4u;
        ebx = ebx + 4u;
    }
    else
    {
        eax = eax + 4u;
        edx = rd32(ecx + 8u);
        ebx = ebx + 4u;
        wr32(sp0 - 8u, edx);
        ecx = edx;
    }
    goto L_10113a0d;
L_10113a42: ;
    t6 = (uint8_t)((uint8_t)ebx - (uint8_t)rd32(sp0 + 0xcu)) << 8u | 1u;
    t7 = rd32(sp0 + 0xcu);
    wr32(t7, t6);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1010f560u), sp0 - 0x10u, 0);
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101139c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101139c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
