/* f_0x102c5b02 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102c5b02(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_1c;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(arg1 + 0x68u) & 1u)
    {
        eax = rd32(arg1 + 0x68u);
        goto L_102c5b43;
    }
    eax = rd32(arg1 + 0x68u);
    wr32(sp0 - 0x1cu, COW_IMG(0x103c905cu));
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, in_edx, 1, 4, arg1, COW_IMG(0x103c905cu), in_edi, in_esi);
    t2 = g->edx;
    eax = t1;
    ecx = COW_IMG(0x103c905cu);
    edx = t2;
L_102c5b24: ;
    if (arg3 == 9u) goto L_102c5b5f;
    wr32(sp0 - 0x1cu, COW_IMG(0x103c9040u));
    loc_1c = COW_IMG(0x103c9040u);
L_102c5b2f: ;
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t3 = cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, loc_1c);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t5, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x1cu), in_edi);
L_102c5b9f: ;
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_102c5b43: ;
    if ((eax & 4u) == 0u) goto L_102c5b4e;
    wr32(sp0 - 0x1cu, COW_IMG(0x103c9028u));
    ecx = self;
    edx = in_edx;
    loc_1c = COW_IMG(0x103c9028u);
    goto L_102c5b2f;
L_102c5b4e: ;
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c5b24;
    }
    if ((rd8(arg2 + 8u) & 0x80u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102c5b24;
    }
    wr32(sp0 - 0x1cu, COW_IMG(0x103c9010u));
    ecx = self;
    edx = in_edx;
    loc_1c = COW_IMG(0x103c9010u);
    goto L_102c5b2f;
L_102c5b5f: ;
    wr32(sp0 - 0x1cu, 9u);
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, arg1);
    g->eax = sp0 - 0x10u;
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x102c4595u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 - 0x10u, 9u, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, arg1);
    g->ecx = t7;
    g->esp = sp0 - 0x18u;
    t9 = cow_call_regs(g, COW_IMG(0x102c45b9u), g->eax, g->ecx, t8, 1, 5, arg1, 0u, arg1, sp0 - 0x10u, 9u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        ecx = t10;
        edx = t11;
        t12 = rd8(sp0 - 8u);
        wr32(sp0 - 0x1cu, t12);
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t13 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 - 0xcu);
        t14 = g->edx;
        wr32(sp0 - 0x20u, t13);
        wr32(sp0 - 0x24u, sp0 - 0x10u);
        g->eax = sp0 - 0x10u;
        g->edx = t14;
        g->esp = sp0 - 0x20u;
        t15 = cow_cdecl(g, COW_IMG(0x102c453cu), 1, sp0 - 0x10u);
        t16 = g->edx;
        wr32(sp0 - 0x24u, t15);
        wr32(sp0 - 0x28u, arg2);
        wr32(sp0 - 0x2cu, arg1);
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102c8432u), 5, arg1, arg2, t15, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    }
    goto L_102c5b9f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102c5b02(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102c5b02(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
