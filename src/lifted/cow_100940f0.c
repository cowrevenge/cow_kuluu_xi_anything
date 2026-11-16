/* f_0x100940f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100940f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1bcu) == 0u)
    {
        ecx = rd32(COW_IMG(0x1065cb04u));
        edx = in_edx;
        esi = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1bcu);
    }
    else
    {
        ecx = rd32(COW_IMG(0x1065cb04u));
        esi = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x1bcu);
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x1018b8c0u), ecx, 1, 0xffffffffu);
        t2 = g->edx;
        t3 = rd32(COW_IMG(0x1065cb04u));
        cow_fastcall(g, COW_IMG(0x1018b5e0u), t3, t2, 1, 1u);
        t4 = g->ecx;
        t5 = g->edx;
        ecx = t4;
        edx = t5;
    }
    t6 = (uint16_t)rd32(COW_IMG(0x10485fe0u));
    g->esi = esi;
    g->eax = t6;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall_cdecl(g, COW_IMG(0x100940b0u), ecx, 1, t6);
    t8 = g->edx;
    if ((uint8_t)t7 != 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
        g->esp = sp0 - 4u;
        t9 = cow_call_regs(g, COW_IMG(0x101889e0u), eax, rd32(COW_IMG(0x1065cb04u)), edx, 1, 0);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
    if (esi != 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, COW_IMG(0x1018b8c0u), rd32(COW_IMG(0x1065cb04u)), 1, 0xffffffffu);
        t12 = g->edx;
        cow_fastcall(g, COW_IMG(0x1018b5e0u), rd32(COW_IMG(0x1065cb04u)), t12, 1, esi);
    }
    g->esi = in_esi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100940f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100940f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
