/* f_0x103136b7 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_103136b7(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329198u)), self, 1, COW_IMG(0x109f8410u));
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(COW_IMG(0x109f840cu)) == 0u)
    {
        ecx = t2;
        edx = t3;
        ebx = 0u;
        edi = rd32(COW_IMG(0x10329194u));
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        edi = rd32(COW_IMG(0x10329194u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t4 = cow_thiscall(g, edi, ecx, 1, COW_IMG(0x109f8410u));
        t5 = g->ecx;
        t6 = g->edx;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, t5, t6, 1, 3, 0x13u, in_edi, in_esi);
        t7 = g->edx;
        ecx = 0x13u;
        edx = t7;
        ebx = 1u;
    }
    t8 = rd32(sp0 + 0xcu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x10313714u), ecx, 3, arg1, arg2, t8);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 + 0xcu, t9);
    if (ebx == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, edi, ecx, 1, COW_IMG(0x109f8410u));
    }
    else
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, 0x13u, in_edi, in_esi);
    }
    return rd32(sp0 + 0xcu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103136b7(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_103136b7(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
