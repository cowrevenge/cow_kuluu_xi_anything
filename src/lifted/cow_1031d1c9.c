/* f_0x1031d1c9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1031d1c9(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_20;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1034a400u));
    wr32(sp0 - 0x10u, COW_IMG(0x1031d0acu));
    wr32(sp0 - 0x14u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x14u);
    wr32(sp0 - 0x34u, in_ebx);
    wr32(sp0 - 0x38u, in_esi);
    wr32(sp0 - 0x3cu, in_edi);
    if (rd32(COW_IMG(0x109f8408u)) != 3u)
    {
        eax = rd32(COW_IMG(0x109f8408u));
        loc_14 = t1;
        goto L_1031d23c;
    }
    eax = rd32(COW_IMG(0x109f8408u));
    loc_14 = t1;
    wr32(sp0 - 0x40u, 9u);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 9u, in_edi, in_esi);
    t2 = g->edx;
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0x40u, arg1);
    g->edx = t2;
    g->esp = sp0 - 0x3cu;
    t3 = cow_cdecl(g, COW_IMG(0x1031b835u), 1, arg1);
    t4 = g->edx;
    wr32(sp0 - 0x20u, t3);
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
        loc_20 = t3;
        esi = rd32(sp0 - 0x24u);
    }
    else
    {
        eax = t3;
        edx = t4;
        loc_20 = t3;
        t5 = rd32(arg1 - 4u) - 9u;
        wr32(sp0 - 0x24u, t5);
        esi = t5;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 0x3cu;
    t6 = cow_fastcall(g, COW_IMG(0x1031d233u), arg1, edx, 0);
    t7 = g->ecx;
    t8 = g->edx;
    eax = t6;
    ecx = t7;
    edx = t8;
    zf = rd32(sp0 - 0x20u) == 0u;
L_1031d285: ;
    if (!zf) goto L_1031d29a;
L_1031d287: ;
    wr32(sp0 - 0x40u, arg1);
    wr32(sp0 - 0x44u, 0u);
    wr32(sp0 - 0x48u, rd32(COW_IMG(0x109f8404u)));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x3cu;
    t17 = cow_thiscall(g, rd32(COW_IMG(0x103290b0u)), ecx, 3, rd32(COW_IMG(0x109f8404u)), 0u, arg1);
    t18 = g->edx;
    edx = t18;
    esi = t17;
L_1031d29a: ;
    t19 = rd32(sp0 - 0x14u);
    wr32(g->fs_base, t19);
    g->ebx = rd32(sp0 - 0x34u);
    g->esi = rd32(sp0 - 0x38u);
    g->edi = rd32(sp0 - 0x3cu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return esi;
L_1031d23c: ;
    if (eax != 2u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1031d287;
    }
    wr32(sp0 - 0x40u, 9u);
    g->esp = sp0 - 0x34u;
    cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 9u, in_edi, in_esi);
    t9 = g->edx;
    wr32(sp0 - 8u, 1u);
    wr32(sp0 - 0x40u, sp0 - 0x28u);
    wr32(sp0 - 0x44u, sp0 - 0x30u);
    wr32(sp0 - 0x48u, arg1);
    g->ecx = 9u;
    g->edx = t9;
    g->esp = sp0 - 0x3cu;
    t10 = cow_cdecl(g, COW_IMG(0x1031c9b2u), 3, arg1, sp0 - 0x30u, sp0 - 0x28u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x2cu, t10);
    if (t10 == 0u)
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        loc_2c = t10;
        esi = rd32(sp0 - 0x24u);
    }
    else
    {
        eax = t10;
        ecx = t11;
        edx = t12;
        loc_2c = t10;
        t13 = rd8(eax) << 4u;
        wr32(sp0 - 0x24u, t13);
        esi = t13;
    }
    wr32(sp0 - 8u, 0xffffffffu);
    g->eax = eax;
    g->esp = sp0 - 0x3cu;
    t14 = cow_fastcall(g, COW_IMG(0x1031d2aeu), ecx, edx, 0);
    t15 = g->ecx;
    t16 = g->edx;
    eax = t14;
    ecx = t15;
    edx = t16;
    zf = rd32(sp0 - 0x2cu) == 0u;
    goto L_1031d285;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031d1c9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031d1c9(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
