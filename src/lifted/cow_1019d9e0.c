/* f_0x1019d9e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1019d9e0(Guest* g)
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
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;

    if (rd8(self + 0x24u) == 1u) goto L_1019d9ef;
    if (rd8(self + 0x2cu) != 1u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1019da09;
    }
L_1019d9ef: ;
    t1 = (in_eax & 0xffff0000u) | rd16(self + 0x44u);
    t2 = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10118db0u), t1, t2, g->edx, 0, 2, t1, 0u);
    t4 = g->edx;
    g->edi = t2;
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x101186a0u), t2, 0);
    t5 = g->ecx;
    t6 = g->edx;
    ecx = t5;
    edx = t6;
L_1019da09: ;
    if (rd32(COW_IMG(0x10456a7cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x10456a7cu));
        goto L_1019da57;
    }
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        goto L_1019da57;
    }
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x101bcb80u), g->eax, g->ecx, edx, 1, 0);
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ecx = rd32(self + 8u);
        edx = t8;
        goto L_1019da41;
    }
    ecx = rd32(self + 8u);
    edx = t8;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, 0xdu);
    t10 = g->edx;
    if (t9 == 5u)
    {
        eax = t9;
        edx = t10;
        goto L_1019da57;
    }
    eax = t9;
    edx = t10;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t11 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 5u, 0xdu);
    t12 = g->edx;
    g->edi = in_edi;
    g->edx = t12;
    return t11;
L_1019da41: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x10118bc0u), ecx, 1, 0xdu);
    t14 = g->edx;
    if (t13 == 0xbu)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        edx = t14;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t15 = cow_thiscall(g, COW_IMG(0x10118b60u), rd32(self + 8u), 2, 0xbu, 0xdu);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
L_1019da57: ;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019d9e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019d9e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
