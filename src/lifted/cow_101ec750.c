/* f_0x101ec750 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101ec750(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    if (rd16(arg3 + 4u) != 0u)
    {
        esi = (in_esi & 0xffff0000u) | rd16(arg3 + 4u);
        goto L_101ec77a;
    }
    wr32(sp0 - 0x60u, 0x9bu);
    g->ebx = arg3;
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x9bu);
    t2 = g->edx;
    g->ebx = in_ebx;
    g->edx = t2;
    return (t1 & 0xffffff00u) | 1u;
L_101ec77a: ;
    if (rd8(arg3 + 7u) != 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(arg3 + 7u);
        goto L_101ec799;
    }
    eax = (in_eax & 0xffffff00u) | rd8(arg3 + 7u);
    wr32(sp0 - 0x60u, 0x82u);
    g->ebx = arg3;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x5cu;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x82u);
    t4 = g->edx;
    g->ebx = in_ebx;
    g->edx = t4;
    return (t3 & 0xffffff00u) | 1u;
L_101ec799: ;
    if ((int8_t)eax >= 0)
    {
        edx = (uint32_t)(int8_t)eax;
    }
    else
    {
        edx = (uint32_t)(int8_t)eax;
        edx = -edx;
    }
    wr32(sp0 - 0x60u, in_edi);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    if ((int32_t)edx <= 1)
    {
        wr16(sp0 - 0x4cu, 0xa8u);
    }
    else
    {
        wr16(sp0 - 0x4cu, 0xa7u);
        wr32(sp0 - 0x44u, edx);
    }
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    wr32(sp0 - 0x48u, (uint16_t)esi);
    g->ebx = arg3;
    g->eax = sp0 - 0x54u;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t5 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t6 = g->edx;
    if ((int8_t)rd8(arg3 + 7u) >= 0)
    {
        eax = (t5 & 0xffffff00u) | rd8(arg3 + 7u);
        edx = t6;
    }
    else
    {
        eax = (t5 & 0xffffff00u) | rd8(arg3 + 7u);
        edx = t6;
        wr32(sp0 - 0x60u, 0x84u);
        g->ebx = arg3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t7 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x84u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->ebx = rd32(sp0 - 0x58u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ec750(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ec750(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
