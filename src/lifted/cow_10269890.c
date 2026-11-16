/* f_0x10269890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10269890(Guest* g)
{
    uint32_t al_m14;
    uint32_t al_m18;
    uint32_t al_m24;
    uint32_t al_m28;
    uint32_t al_m2c;
    uint32_t al_m30;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t of;
    uint32_t sf;
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
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 72u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 4u, 0xffffffffu);
    wr32(sp1 - 8u, COW_IMG(0x103280b8u));
    wr32(sp1 - 0xcu, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp1 - 0xcu);
    wr32(sp1 - 0x2cu, in_esi);
    wr32(sp1 - 0x30u, in_edi);
    wr32(sp1 - 0x34u, self + 8u);
    wr32(sp1 - 0x24u, self + 8u);
    g->edx = in_edx;
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(COW_IMG(0x1032918cu)), self, 1, self + 8u);
    t2 = g->edx;
    wr32(sp1 - 4u, 0u);
    wr32(sp1 - 0x28u, 0u);
    if ((int32_t)rd32(self + 0x40u) <= 0)
    {
        eax = 0u;
        edx = t2;
        al_m28 = 0u;
    }
    else
    {
        edx = t2;
        t3 = rd32(self + 0x38u);
        wr32(sp1 - 0x34u, t3);
        g->edx = edx;
        g->esp = sp1 - 0x30u;
        t4 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t3);
        t5 = g->edx;
        wr32(sp1 - 0x28u, t4);
        eax = t4;
        edx = t5;
        al_m28 = t4;
    }
    if ((int32_t)rd32(self + 0x28u) <= 0)
    {
        esi = 0u;
        goto L_10269950;
    }
    t6 = rd32(self + 0x20u);
    wr32(sp1 - 0x34u, t6);
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    t7 = cow_stdcall(g, COW_IMG(0x10269bb0u), 1, t6);
    t8 = g->edx;
    if (t7 == 0u)
    {
        edx = t8;
        esi = t7;
        goto L_1026994c;
    }
    edx = t8;
    esi = t7;
    t9 = rd32(esi + 0x18u);
    wr32(sp1 - 0x18u, t9);
    t10 = rd32(esi + 0x1cu);
    wr32(sp1 - 0x14u, t10);
    if (rd32(self + 0x60u) == 0u) goto L_1026994c;
    eax = rd32(self + 0x60u);
    al_m18 = t9;
    al_m14 = t10;
    wr32(sp1 - 0x20u, 0u);
    wr32(sp1 - 0x1cu, 0u);
    wr32(sp1 - 0x34u, sp1 - 0x20u);
    wr32(sp1 - 0x38u, eax);
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(rd32(eax) + 0xcu), sp1 - 0x20u, 2, eax, sp1 - 0x20u);
    if ((int32_t)rd32(sp1 - 0x14u) > 0)
    {
        edx = rd32(sp1 - 0x14u);
        goto L_1026994c;
    }
    edx = rd32(sp1 - 0x14u);
    sf = (int32_t)rd32(sp1 - 0x14u) < 0;
    if (sf) goto L_10269940;
    if (rd32(sp1 - 0x18u) != 0u) goto L_1026994c;
L_10269940: ;
    wr32(sp1 - 0x34u, esi + 0xcu);
    t11 = rd32(esi + 0xcu);
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(t11 + 4u), t11, 1, esi + 0xcu);
    t12 = g->ecx;
    ecx = t12;
L_102699c3: ;
    wr32(sp1 - 0x34u, al_m24);
    wr32(arg3, esi);
    g->edx = arg3;
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), ecx, 1, al_m24);
    t16 = g->edx;
    t17 = rd32(sp1 - 0xcu);
    wr32(g->fs_base, t17);
    g->esi = rd32(sp1 - 0x2cu);
    g->edi = rd32(sp1 - 0x30u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t16;
    return 0u;
L_1026994c: ;
    eax = rd32(sp1 - 0x28u);
L_10269950: ;
    if (eax == 0u) goto L_1026999b;
    if ((int32_t)rd32(eax + 0x1cu) > (int32_t)arg2)
    {
        edx = rd32(eax + 0x1cu);
        goto L_1026999b;
    }
    edx = rd32(eax + 0x1cu);
    sf = (int32_t)(rd32(eax + 0x1cu) - arg2) < 0;
    of = ((rd32(eax + 0x1cu) ^ arg2) & (rd32(eax + 0x1cu) ^ rd32(eax + 0x1cu) - arg2)) >> 0x1fu;
    if (sf != of) goto L_10269968;
    if (rd32(eax + 0x18u) > arg1) goto L_1026999b;
L_10269968: ;
    wr32(sp1 - 0x34u, esi + 0xcu);
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(rd32(esi + 0xcu) + 4u), rd32(esi + 0xcu), 1, esi + 0xcu);
    wr32(sp1 - 0x34u, self + 8u);
    t13 = rd32(sp1 - 0x28u);
    wr32(arg3, t13);
    g->edx = arg3;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), self + 8u, 1, self + 8u);
    t14 = g->edx;
    t15 = rd32(sp1 - 0xcu);
    wr32(g->fs_base, t15);
    g->edx = t14;
    return 0u;
L_1026999b: ;
    if (rd32(self + 0x64u) == 0u)
    {
        eax = rd32(self + 0x64u);
        goto L_102699e8;
    }
    eax = rd32(self + 0x64u);
    if (esi == 0u) goto L_102699e8;
    if ((int32_t)rd32(esi + 0x1cu) > (int32_t)(arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u))))
    {
        eax = arg1 + rd32(self + 0x68u);
        edx = rd32(esi + 0x1cu);
        goto L_102699e8;
    }
    eax = arg1 + rd32(self + 0x68u);
    edx = rd32(esi + 0x1cu);
    sf = (int32_t)(rd32(esi + 0x1cu) - (arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u)))) < 0;
    of = ((rd32(esi + 0x1cu) ^ arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u))) & (rd32(esi + 0x1cu) ^ rd32(esi + 0x1cu) - (arg2 + rd32(self + 0x6cu) + (arg1 + rd32(self + 0x68u) < rd32(self + 0x68u))))) >> 0x1fu;
    if (sf != of)
    {
        ecx = arg1;
        loc_4 = in_ebp;
        al_m2c = in_esi;
        al_m30 = in_edi;
        al_m24 = self + 8u;
        goto L_102699c3;
    }
    if (rd32(esi + 0x18u) > eax) goto L_102699e8;
    ecx = rd32(esi + 0x18u);
    loc_4 = in_ebp;
    al_m2c = in_esi;
    al_m30 = in_edi;
    al_m24 = self + 8u;
    goto L_102699c3;
L_102699e8: ;
    wr32(sp1 - 0x34u, self + 8u);
    g->edx = edx;
    g->esp = sp1 - 0x30u;
    cow_thiscall(g, rd32(COW_IMG(0x10329188u)), self + 8u, 1, self + 8u);
    t18 = g->edx;
    t19 = rd32(sp1 - 0xcu);
    wr32(g->fs_base, t19);
    g->edx = t18;
    return 0x80040216u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10269890(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
