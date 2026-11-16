/* f_0x101a8030 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=3 */
uint32_t cow_fn_101a8030(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_101a803e;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_101a803e: ;
    if ((uint8_t)arg1 == 2u) goto L_101a8073;
    if (rd8(sp0 + 8u) != 0u) goto L_101a8073;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x101a7d00u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        goto L_101a8069;
    }
    edx = t6;
    g->ebx = arg1;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0x22u);
    g->ebx = in_ebx;
    return (t7 & 0xffffff00u) | 1u;
L_101a8069: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t9 = g->ecx;
    t10 = g->edx;
    wr32(COW_IMG(0x106627e4u), t8);
    ecx = t9;
    edx = t10;
L_101a8073: ;
    g->ebx = arg1;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_cdecl(g, COW_IMG(0x100e5520u), 2, arg1, arg3);
    t12 = g->ecx;
    t13 = g->edx;
    wr8(sp0 + 8u, (uint8_t)t11);
    if ((uint8_t)t11 == 0u)
    {
        eax = t11;
        goto L_101a80c0;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    if ((uint8_t)arg1 != 0u) goto L_101a80a2;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xbfu, 0u);
    g->ebx = in_ebx;
    return (t14 & 0xffffff00u) | rd8(sp0 + 8u);
L_101a80a2: ;
    if ((uint8_t)arg1 == 1u) goto L_101a80b1;
    if ((uint8_t)arg1 == 3u) goto L_101a80b1;
    if ((uint8_t)arg1 != 4u) goto L_101a80c0;
L_101a80b1: ;
    g->esp = sp0 - 4u;
    t15 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xbfu, 1u);
    eax = t15;
L_101a80c0: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | rd8(sp0 + 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8030(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8030(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
