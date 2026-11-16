/* f_0x102c70f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c70f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg3 == 0u)
    {
        ecx = self;
    }
    else
    {
        t1 = rd32(arg1 + 0x3cu);
        wr32(arg3, t1);
        ecx = t1;
    }
    if (rd32(arg1) == 4u)
    {
        eax = rd32(arg1);
        goto L_102c7116;
    }
    eax = rd32(arg1);
    if (eax != 5u)
    {
        edx = in_edx;
        goto L_102c7121;
    }
L_102c7116: ;
    t2 = rd32(arg1 + 0xcu);
    t3 = rd32(arg2 + 0x28u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall_cdecl(g, rd32(arg2 + 0x24u), ecx, 2, t3, t2);
    t5 = g->edx;
    eax = t4;
    ecx = t2;
    edx = t5;
L_102c7121: ;
    if (rd32(arg1) == 6u)
    {
        t6 = rd32(arg1 + 4u);
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x102c9315u), g->eax, ecx, edx, 1, 4, t6, arg2, in_edi, in_esi);
        t7 = g->edx;
        ecx = arg2;
        edx = t7;
    }
    t8 = rd32(arg1 + 0x28u);
    wr32(arg1, 0u);
    wr32(arg1 + 0x34u, t8);
    wr32(arg1 + 0x30u, t8);
    t9 = rd32(arg1 + 0x38u);
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x20u, 0u);
    if (t9 != 0u)
    {
        eax = t9;
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t10 = cow_thiscall_cdecl(g, eax, ecx, 3, 0u, 0u, 0u);
        wr32(arg1 + 0x3cu, t10);
        wr32(arg2 + 0x30u, t10);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c70f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c70f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
