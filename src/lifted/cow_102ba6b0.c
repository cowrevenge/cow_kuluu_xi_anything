/* f_0x102ba6b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_102ba6b0(Guest* g)
{
    double d1;
    double d11;
    double d13;
    double d2;
    double d7;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t10;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    d1 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(rd32(sp0 + 4u) + 0x34u));
    d2 = (double)rdf32(rd32(sp0 + 4u) + 0x10u);
    t3 = rd32(sp0 + 4u);
    wrf32(sp0 + 8u, (float)d1);
    if ((cow_fsw(g, d1, d2, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d1, d2, 1u) & 0x4100u;
        ebp = t3;
        x0 = d1;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = cow_fsw(g, d1, d2, 1u) & 0x4100u;
        ebp = t3;
        x0 = d1;
        x1 = fr(g, x0 / (double)rdf32(ebp + 0x10u));
    }
    g->ecx = self;
    g->edx = in_edx;
    fpush(g, x1);
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t5 = g->ecx;
    t6 = g->edx;
    d7 = (double)rdf32(ebp + 0x14u);
    wr32(sp0 - 4u, t4);
    if ((cow_fsw(g, x0, d7, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, d7, 1u) & 0x4100u;
        ecx = t5;
        edx = t6;
        loc_4 = t4;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = cow_fsw(g, x0, d7, 1u) & 0x4100u;
        ecx = t5;
        edx = t6;
        loc_4 = t4;
        x1 = fr(g, x0 / (double)rdf32(ebp + 0x14u));
    }
    g->ecx = ecx;
    g->edx = edx;
    fpush(g, x1);
    g->esp = sp0 - 0x18u;
    t8 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = (double)rdf32(ebp + 0x18u);
    wr32(sp0 - 8u, t8);
    if ((cow_fsw(g, x0, d11, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, x0, d11, 1u) & 0x4100u;
        ecx = t9;
        edx = t10;
        loc_8 = t8;
        x1 = (double)rdf32(COW_IMG(0x103295d8u));
    }
    else
    {
        eax = cow_fsw(g, x0, d11, 1u) & 0x4100u;
        ecx = t9;
        edx = t10;
        loc_8 = t8;
        x1 = fr(g, x0 / (double)rdf32(ebp + 0x18u));
    }
    fpush(g, x1);
    g->esp = sp0 - 0x18u;
    t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    d13 = rdf64(COW_IMG(0x1032a108u));
    wr32(sp0 + 4u, t12);
    if ((cow_fsw(g, x0, d13, 0u) & 0x4100u) == 0u)
    {
        eax = cow_fsw(g, x0, d13, 0u) & 0x4100u;
        if (rd8(sp0 + 0xcu) != 0u)
        {
            t14 = rd32(sp0 - 4u) + 1u;
            wr32(sp0 - 4u, t14);
            t15 = rd32(sp0 - 8u) + 1u;
            wr32(sp0 - 8u, t15);
            t16 = rd32(sp0 + 4u) + 1u;
            wr32(sp0 + 4u, t16);
            loc_4 = t14;
            loc_8 = t15;
        }
    }
    wr32(sp0 + 0xcu, 1u);
    wr32(arg4, 0u);
    ebx = 0u;
L_102ba772: ;
    edi = 0u;
L_102ba774: ;
    esi = 0u;
L_102ba776: ;
    wr32(sp0 - 0x1cu, arg4);
    wr32(sp0 - 0x20u, sp0 + 0xcu);
    t17 = rd32(sp0 + 8u);
    wr32(sp0 - 0x24u, t17);
    t18 = rd32(sp0 + 4u);
    wr32(sp0 - 0x28u, t18);
    wr32(sp0 - 0x2cu, loc_8);
    wr32(sp0 - 0x30u, loc_4);
    wr32(sp0 - 0x34u, esi);
    wr32(sp0 - 0x38u, edi);
    wr32(sp0 - 0x3cu, ebx);
    wr32(sp0 - 0x40u, ebp);
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102ba7c0u), 10, ebp, ebx, edi, esi, loc_4, loc_8, t18, t17, sp0 + 0xcu, arg4);
    if ((int32_t)(esi + 1u) < 15)
    {
        esi = esi + 1u;
        goto L_102ba776;
    }
    if ((int32_t)(edi + 1u) < 15)
    {
        edi = edi + 1u;
        goto L_102ba774;
    }
    if ((int32_t)(ebx + 1u) < 15)
    {
        ebx = ebx + 1u;
        goto L_102ba772;
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ba6b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ba6b0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
