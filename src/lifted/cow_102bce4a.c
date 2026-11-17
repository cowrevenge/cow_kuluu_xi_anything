/* f_0x102bce4a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102bce4a(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    if (arg3 < 0x260u) goto L_102bce69;
    if (arg4 >= 0x120u)
    {
        ecx = self;
        edx = in_edx;
        goto L_102bceb6;
    }
L_102bce69: ;
    wr32(arg1 + 0x44u, 0u);
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        wr32(sp0 - 0x64u, arg2);
        wr32(sp0 - 0x68u, COW_IMG(0x103c7cc4u));
        wr32(sp0 - 0x6cu, sp0 - 0x54u);
        g->ebx = 0u;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x54u, COW_IMG(0x103c7cc4u), arg2, in_edi, in_esi);
        t1 = g->ecx;
        t2 = g->edx;
        wr32(sp0 - 0x70u, sp0 - 0x54u);
        wr32(sp0 - 0x74u, arg1);
        g->ecx = t1;
        g->edx = t2;
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, sp0 - 0x54u);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
    }
    wr32(sp0 - 0x64u, COW_IMG(0x10342de8u));
    wr32(sp0 - 0x68u, COW_IMG(0x103c7c8cu));
    wr32(sp0 - 0x6cu, sp0 - 0x54u);
    g->ebx = 0u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x54u, COW_IMG(0x103c7c8cu), COW_IMG(0x10342de8u), in_edi, in_esi);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x70u, sp0 - 0x54u);
    wr32(sp0 - 0x74u, arg1);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x102bca0au), 2, arg1, sp0 - 0x54u);
    t7 = g->ecx;
    t8 = g->edx;
    ecx = t7;
    edx = t8;
L_102bceb6: ;
    if (arg3 < 0x260u)
    {
        wr32(sp0 - 0x64u, COW_IMG(0x103c7d58u));
        wr32(arg1 + 0x40u, 0u);
        wr32(arg1 + 0x6cu, 0u);
        wr32(sp0 - 0x68u, arg1);
        g->esp = sp0 - 0x58u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7d58u), in_edi, in_esi);
        t9 = g->edx;
        ecx = COW_IMG(0x103c7d58u);
        edx = t9;
    }
    if (arg4 < 0x120u)
    {
        wr32(sp0 - 0x64u, COW_IMG(0x103c7d10u));
        wr32(arg1 + 0x40u, 0u);
        wr32(arg1 + 0x6cu, 0u);
        wr32(sp0 - 0x68u, arg1);
        g->esp = sp0 - 0x58u;
        cow_call_regs(g, COW_IMG(0x102bc97eu), g->eax, g->ecx, edx, 1, 4, arg1, COW_IMG(0x103c7d10u), in_edi, in_esi);
        t10 = g->edx;
        ecx = COW_IMG(0x103c7d10u);
        edx = t10;
    }
    wr32(sp0 - 0x64u, arg3);
    wr32(sp0 - 0x68u, arg2);
    wr32(sp0 - 0x6cu, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->esp = sp0 - 0x5cu;
    t11 = cow_call_regs(g, COW_IMG(0x102bcf0du), g->eax, g->ecx, edx, 1, 4, sp0 + 4u, arg2, arg3, in_edi);
    t12 = g->edx;
    g->ebx = in_ebx;
    g->edx = t12;
    return t11;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102bce4a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102bce4a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
