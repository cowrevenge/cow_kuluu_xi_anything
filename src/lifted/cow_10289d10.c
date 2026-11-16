/* f_0x10289d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10289d10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, arg1);
    g->ecx = self;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10289580u), g->eax, g->ecx, in_edx, 1, 3, arg1, arg2, in_edi);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->ecx = t1;
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x10289580u), g->eax, g->ecx, t2, 1, 3, sp0 + 8u, arg2, arg1);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, arg1 + 8u);
    g->ecx = t4;
    g->esp = sp0 - 0x1cu;
    cow_call_regs(g, COW_IMG(0x10289580u), g->eax, g->ecx, t5, 1, 3, arg1 + 8u, arg2, sp0 + 8u);
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)rd32(arg1 + 8u) > 0)
    {
        eax = rd32(arg1 + 8u);
        ecx = t6;
        edx = t7;
        wr32(sp0 - 0x14u, eax);
        wr32(sp0 - 0x18u, arg1);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10289ca0u), 6, arg1, eax, in_edi, in_esi, in_ebp, in_ebx);
        t8 = g->ecx;
        t9 = g->edx;
        t10 = rd32(arg1 + 0xcu);
        wr32(arg1 + 4u, arg2);
        if ((int32_t)arg2 <= 0) goto L_10289d70;
        eax = arg2;
        ecx = t8;
        edx = t9;
        ebx = 0u;
        edi = t10;
L_10289d5b: ;
        wr32(sp0 - 0x14u, arg2);
        wr32(sp0 - 0x18u, edi);
        g->ecx = ecx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x1029b510u), g->eax, g->ecx, edx, 1, 5, edi, arg2, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t11 = g->ecx;
        t12 = g->edx;
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(arg1 + 4u))
        {
            eax = rd32(arg1 + 4u);
            ecx = t11;
            edx = t12;
            ebx = ebx + 1u;
            edi = edi + 0xcu;
            goto L_10289d5b;
        }
    }
L_10289d70: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10289d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10289d10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
