/* f_0x1027d1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1027d1f0(Guest* g)
{
    double d6;
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 120u);

    wr32(sp0 - 0x34u, in_esi);
    if ((int32_t)arg5 > 0)
    {
        wr32(sp0 - 0x38u, in_ebx);
        wr32(sp0 - 0x3cu, in_ebp);
        wr32(sp0 - 0x40u, in_edi);
        edx = in_edx;
        esi = 0u;
L_1027d20d: ;
        if (rd32(arg6 + esi * 4u) == 0u) goto L_1027d21f;
        eax = rd32(arg6 + esi * 4u);
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_1027d23f;
        }
        eax = eax - 1u;
        if (eax != 1u) goto L_1027d230;
L_1027d21f: ;
        d6 = fr(g, fr(g, fr(g, (double)rdf32(arg3 + esi * 4u) - (double)rdf32(arg2 + esi * 4u)) * (double)rdf32(sp0 + 0x10u)) + (double)rdf32(arg2 + esi * 4u));
        wrf32(arg1 + esi * 4u, (float)d6);
L_1027d230: ;
        esi = esi + 1u;
L_1027d231: ;
        if ((int32_t)esi < (int32_t)arg5) goto L_1027d20d;
    }
    return;
L_1027d23f: ;
    wr32(sp0 - 0x44u, esi);
    wr32(sp0 - 0x48u, arg2);
    wr32(sp0 - 0x4cu, sp0 - 0x20u);
    g->eax = eax;
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0x40u;
    t1 = cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0x20u, arg2, esi);
    t2 = g->ecx;
    wr32(sp0 - 0x50u, esi);
    wr32(sp0 - 0x54u, arg3);
    wr32(sp0 - 0x58u, sp0 - 0x30u);
    g->esp = sp0 - 0x4cu;
    cow_cdecl(g, COW_IMG(0x1027d0d0u), 3, sp0 - 0x30u, arg3, esi);
    wr32(sp0 - 0x5cu, arg4);
    wr32(sp0 - 0x60u, sp0 - 0x30u);
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    wr32(sp0 - 0x68u, sp0 - 0x10u);
    g->edx = sp0 - 0x20u;
    t3 = cow_call_regs(g, COW_IMG(0x1027b2e0u), sp0 - 0x10u, g->ecx, g->edx, 1, 7, sp0 - 0x10u, sp0 - 0x20u, sp0 - 0x30u, arg4, sp0 - 0x30u, arg3, rd32(sp0 - 0x50u));
    t4 = g->edx;
    wr32(sp0 - 0x6cu, esi);
    wr32(sp0 - 0x70u, arg1);
    wr32(sp0 - 0x74u, sp0 - 0x10u);
    g->edx = t4;
    g->esp = sp0 - 0x68u;
    cow_cdecl(g, COW_IMG(0x1027d0a0u), 3, sp0 - 0x10u, arg1, esi);
    t5 = g->edx;
    edx = t5;
    esi = esi + 4u;
    goto L_1027d231;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1027d1f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
