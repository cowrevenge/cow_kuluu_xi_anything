/* f_0x1002a9f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_1002a9f0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 136u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr32(sp0 - 0x50u, self);
    wr32(sp0 - 0x4cu, 0x656c6469u);
    wr32(sp0 - 0x48u, 0x6b6c6177u);
    wr32(sp0 - 0x44u, 0x206e7572u);
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x28u, 0x3f800000u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0u);
    edx = in_edx;
    esi = 0u;
    edi = 0u;
    loc_54 = in_ebx;
    loc_58 = in_ebp;
    loc_5c = in_esi;
    loc_60 = in_edi;
    loc_50 = self;
L_1002aa6d: ;
    t1 = rd32(esi * 4u + sp0 - 0x4cu);
    wr32(sp0 - 0x64u, t1);
    wr32(sp0 - 0x68u, 0x2bu);
    wr32(sp0 - 0x6cu, sp0 + 8u);
    wr32(sp0 - 0x70u, arg2);
    g->eax = t1;
    g->edx = edx;
    g->esp = sp0 - 0x6cu;
    t2 = cow_stdcall(g, COW_IMG(0x10072fb0u), 1, arg2);
    t3 = g->edx;
    g->edx = t3;
    g->esp = sp0 - 0x60u;
    cow_thiscall(g, COW_IMG(0x10072290u), t2, 3, sp0 + 8u, 0x2bu, rd32(sp0 - 0x64u));
    t4 = g->edx;
    if (arg2 == 0u)
    {
        edx = t4;
    }
    else
    {
        edx = t4;
        wr32(edi * 4u + sp0 - 0x10u, arg2);
        edi = edi + 1u;
    }
    if ((int32_t)(esi + 1u) < 3)
    {
        esi = esi + 1u;
        loc_54 = rd32(sp0 - 0x54u);
        loc_58 = rd32(sp0 - 0x58u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_60 = rd32(sp0 - 0x60u);
        loc_50 = rd32(sp0 - 0x50u);
        goto L_1002aa6d;
    }
    if (edi == 0u)
    {
        eax = arg2;
    }
    else
    {
        wr32(sp0 - 0x64u, 0u);
        wr32(sp0 - 0x68u, 0x3f800000u);
        wr32(sp0 - 0x6cu, arg3);
        wr32(sp0 - 0x70u, edi);
        wr32(sp0 - 0x74u, sp0 - 0x40u);
        wr32(sp0 - 0x78u, sp0 - 0x30u);
        wr32(sp0 - 0x7cu, sp0 - 0x20u);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        wr32(sp0 - 0x84u, arg1);
        g->eax = sp0 - 0x10u;
        g->edx = rd32(sp0 - 0x50u);
        t5 = rd32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        t6 = cow_thiscall(g, COW_IMG(0x1001a760u), t5 + 0x24u, 9, arg1, sp0 - 0x10u, sp0 - 0x20u, sp0 - 0x30u, sp0 - 0x40u, edi, arg3, 0x3f800000u, 0u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x5cu);
    g->edi = rd32(sp0 - 0x60u);
    g->ebp = rd32(sp0 - 0x58u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1002a9f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1002a9f0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
