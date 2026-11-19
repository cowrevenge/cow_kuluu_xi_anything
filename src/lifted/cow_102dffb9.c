/* f_0x102dffb9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102dffb9(Guest* g)
{
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_d8;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 244u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102dffdeu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd8u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xd8u); goto E_102dffde;
    case 0x102dffe8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0xd8u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xd8u); goto E_102dffe8;
    case 0x102e0041u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102e0041;
    case 0x102e0049u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_102e0049;
    case 0x102e006eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102e006e;
    case 0x102e0080u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_18 = rd32(sp0 - 0x18u); goto E_102e0080;
    case 0x102e0087u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_102e0087;
    case 0x102e0096u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_24 = rd32(sp0 - 0x24u); loc_18 = rd32(sp0 - 0x18u); goto E_102e0096;
    case 0x102e00bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; loc_20 = rd32(sp0 - 0x20u); goto E_102e00ba;
    case 0x102e00c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_102e00c9;
    case 0x102e00cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_102e00cb;
    case 0x102e00dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_102e00da;
    case 0x102e0106u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_20 = rd32(sp0 - 0x20u); goto E_102e0106;
    case 0x102e010fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e010f;
    case 0x102e011bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e011b;
    case 0x102e0122u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e0122;
    case 0x102e0136u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e0136;
    case 0x102e0145u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e0145;
    case 0x102e014cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e014c;
    case 0x102e015au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e015a;
    case 0x102e016au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e016a;
    case 0x102e0176u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e0176;
    case 0x102e0334u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e0334;
    case 0x102e0337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e0337;
    case 0x102e0362u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); goto E_102e0362;
    case 0x102e0366u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0366;
    case 0x102e036bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_3c = rd32(sp0 - 0x3cu); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e036b;
    case 0x102e0392u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_d8 = rd32(sp0 - 0xd8u); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102e0392;
    default: break;
    }
#endif

    COW_AT(102dffb9)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x10328261u));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102dffc3u));
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0xd8u, in_esi);
    wr32(sp0 - 0x44u, self);
    if ((uint8_t)rd32(self + 8u) == 3u)
    {
        eax = rd32(self + 8u);
        loc_10 = t1;
    COW_AT(102dffe8)
        wr32(sp0 - 0xdcu, in_ebx);
        wr32(sp0 - 0xe0u, in_edi);
        t2 = ~(eax >> 0x11u) & 1u;
        wr32(sp0 - 0x14u, t2);
        t3 = ~(eax >> 0x10u) & 1u;
        wr32(sp0 - 0xe4u, t3);
        g->ebx = rd32(rd32(self + 4u) + 0x1058u);
        g->edi = rd32(rd32(self) + 0x1058u);
        g->eax = rd32(self + 4u);
        g->edx = in_edx;
        t4 = rd32(self + 4u);
        g->esp = sp0 - 0xe0u;
        t5 = cow_cdecl(g, COW_IMG(0x102dfeb9u), 1, t3);
        t6 = g->edx;
        t7 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0xe8u, t7);
        wr32(sp0 - 0x34u, t5);
        g->ebx = rd32(rd32(self + 4u) + 0x105cu);
        g->edi = rd32(rd32(self) + 0x105cu);
        g->eax = rd32(self + 4u);
        g->edx = t6;
        t8 = rd32(self + 4u);
        g->esp = sp0 - 0xe4u;
        t9 = cow_cdecl(g, COW_IMG(0x102dfeb9u), 1, t7);
        t10 = g->edx;
        wr32(sp0 - 0x14u, t9);
        if (rd32(sp0 - 0x34u) == 0u)
        {
            eax = t9;
            ecx = rd32(sp0 - 0xe4u);
            edx = t10;
            loc_14 = t9;
            loc_18 = 0u;
            loc_20 = 0u;
            goto L_102e0366;
        }
        eax = t9;
        ecx = rd32(sp0 - 0xe4u);
        edx = t10;
        loc_14 = t9;
    COW_AT(102e0041)
        if (eax == 0u)
        {
            loc_18 = rd32(sp0 - 0x18u);
            loc_20 = rd32(sp0 - 0x20u);
            goto L_102e0366;
        }
    COW_AT(102e0049)
        t11 = rd32(rd32(self + 4u) + 0x1058u);
        wr32(sp0 - 0xe4u, t11 << 4u);
        g->eax = t11 << 4u;
        g->esp = sp0 - 0xd8u;
        t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t11 << 4u, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
        t13 = g->edx;
        wr32(sp0 - 0x18u, t12);
        wr32(sp0 - 8u, 0u);
        if (t12 == 0u)
        {
            ecx = rd32(sp0 - 0xe4u);
            edx = t13;
    COW_AT(102e0080)
            wr32(sp0 - 0x24u, 0u);
            eax = 0u;
            loc_24 = 0u;
        }
        else
        {
            eax = t12;
            ecx = rd32(sp0 - 0xe4u);
            edx = t13;
            ebx = t11;
            loc_18 = t12;
    COW_AT(102e006e)
            wr32(sp0 - 0xe4u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0xe8u, ebx);
            wr32(sp0 - 0xecu, 0x10u);
            wr32(sp0 - 0xf0u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0xe0u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, ebx, COW_IMG(0x102d2a17u));
            t14 = g->ecx;
            t15 = g->edx;
            t16 = rd32(sp0 - 0x18u);
            wr32(sp0 - 0x24u, t16);
            eax = t16;
            ecx = t14;
            edx = t15;
            loc_24 = t16;
        }
    COW_AT(102e0087)
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x18u, eax);
        if (eax == 0u)
        {
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = eax;
            loc_20 = rd32(sp0 - 0x20u);
            goto L_102e0366;
        }
        loc_18 = eax;
    COW_AT(102e0096)
        t17 = rd32(rd32(self) + 0x1058u) << 1u;
        wr32(sp0 - 0xe4u, t17 << 4u);
        g->eax = t17 << 4u;
        g->esp = sp0 - 0xd8u;
        t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t17 << 4u, rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu));
        t19 = g->edx;
        wr32(sp0 - 0x20u, t18);
        wr32(sp0 - 8u, 1u);
        if (t18 == 0u)
        {
            ecx = rd32(sp0 - 0xe4u);
            edx = t19;
    COW_AT(102e00c9)
            eax = 0u;
        }
        else
        {
            eax = t18;
            ecx = rd32(sp0 - 0xe4u);
            edx = t19;
            ebx = t17;
            loc_20 = t18;
    COW_AT(102e00ba)
            wr32(sp0 - 0xe4u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0xe8u, ebx);
            wr32(sp0 - 0xecu, 0x10u);
            wr32(sp0 - 0xf0u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0xe0u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, ebx, COW_IMG(0x102d2a17u));
            t20 = g->ecx;
            t21 = g->edx;
            eax = rd32(sp0 - 0x20u);
            ecx = t20;
            edx = t21;
        }
    COW_AT(102e00cb)
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x20u, eax);
        if (eax == 0u)
        {
            loc_14 = rd32(sp0 - 0x14u);
            loc_18 = rd32(sp0 - 0x18u);
            loc_20 = eax;
            goto L_102e0366;
        }
        loc_20 = eax;
    COW_AT(102e00da)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0xffffffffu);
        wr32(sp0 - 0x1cu, 0xffffffffu);
        wr32(sp0 - 0x30u, eax);
        if (rd32(rd32(self + 4u) + 0x105cu) == 0u)
        {
            eax = rd32(self + 4u);
            ecx = rd32(self);
        }
        else
        {
            ebx = eax + rd32(rd32(self) + 0x1058u) * 0x10u;
            loc_30 = eax;
    COW_AT(102e0106)
            t22 = rd32(sp0 - 0x14u) + 8u;
            wr32(sp0 - 0x3cu, t22);
            esi = self;
            edi = t22;
            loc_2c = 0u;
            loc_28 = 0xffffffffu;
            loc_1c = 0xffffffffu;
            loc_3c = t22;
L_102e010f: ;
    COW_AT(102e010f)
            wr32(sp0 - 0x38u, 0u);
            if (rd32(edi - 8u) != loc_28)
            {
                eax = rd32(edi - 8u);
    COW_AT(102e011b)
                if (eax == loc_1c)
                {
                    ecx = loc_1c;
    COW_AT(102e0136)
                    wr32(sp0 - 0x1cu, 0xffffffffu);
                    wr32(sp0 - 0x30u, ebx);
                    wr32(sp0 - 0x28u, ecx);
                    loc_28 = ecx;
                    loc_1c = 0xffffffffu;
                    t24 = ebx;
                    ebx = loc_30;
                    loc_30 = t24;
                }
                else
                {
    COW_AT(102e0122)
                    wr32(sp0 - 0xe4u, loc_30);
                    wr32(sp0 - 0x28u, eax);
                    wr32(sp0 - 0xe8u, 0u);
                    wr32(sp0 - 0xecu, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0xe0u;
                    cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, eax, 0u, loc_30);
                    t23 = g->edx;
                    edx = t23;
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_3c = rd32(sp0 - 0x3cu);
                }
            }
    COW_AT(102e0145)
            if (rd32(edi) != loc_1c)
            {
                eax = rd32(edi);
    COW_AT(102e014c)
                wr32(sp0 - 0xe4u, ebx);
                wr32(sp0 - 0xe8u, 0u);
                wr32(sp0 - 0xecu, eax);
                wr32(sp0 - 0x1cu, eax);
                g->edx = rd32(rd32(esi));
                t25 = rd32(rd32(esi));
                g->esp = sp0 - 0xe0u;
                cow_thiscall(g, rd32(t25 + 4u), rd32(esi), 3, eax, 0u, ebx);
                t26 = g->edx;
                edx = t26;
                loc_20 = rd32(sp0 - 0x20u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_28 = rd32(sp0 - 0x28u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_3c = rd32(sp0 - 0x3cu);
            }
    COW_AT(102e015a)
            if (rd32(rd32(esi + 4u) + 0x1058u) == 0u)
            {
                loc_38 = 0u;
            }
            else
            {
    COW_AT(102e016a)
                t27 = rd32(sp0 - 0x24u);
                wr32(sp0 - 0x40u, t27);
                eax = rd32(sp0 - 0x34u) + 8u;
                loc_38 = 0u;
                loc_40 = t27;
L_102e0176: ;
    COW_AT(102e0176)
                d28 = (double)rdf32(eax + 4u);
                d29 = fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u));
                wrf32(sp0 - 0x54u, (float)(double)(float)d29);
                d30 = fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u + 4u));
                wrf32(sp0 - 0x50u, (float)(double)(float)d30);
                d31 = fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u + 8u));
                wrf32(sp0 - 0x4cu, (float)(double)(float)d31);
                d32 = (double)rdf32(eax - 4u);
                d33 = fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u + 4u));
                d34 = fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u));
                d35 = fr(g, d28 * (double)rdf32(ebx + rd32(eax) * 0x10u + 0xcu));
                wrf32(sp0 - 0xa0u, (float)(double)(float)d33);
                d36 = fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u + 8u));
                wrf32(sp0 - 0x9cu, (float)(double)(float)d36);
                d37 = fr(g, d32 * (double)rdf32(ebx + rd32(eax - 8u) * 0x10u + 0xcu));
                wrf32(sp0 - 0x98u, (float)(double)(float)d37);
                d38 = (double)(float)fr(g, d34 + (double)(float)d29);
                wrf32(sp0 - 0x84u, (float)d38);
                d39 = (double)(float)fr(g, (double)(float)d33 + (double)(float)d30);
                wrf32(sp0 - 0x80u, (float)d39);
                d40 = (double)(float)fr(g, (double)(float)d36 + (double)(float)d31);
                wrf32(sp0 - 0x7cu, (float)d40);
                d41 = fr(g, d38 * (double)rdf32(edi + 4u));
                wrf32(sp0 - 0xb4u, (float)(double)(float)d41);
                d42 = fr(g, d39 * (double)rdf32(edi + 4u));
                wrf32(sp0 - 0xb0u, (float)(double)(float)d42);
                d43 = fr(g, d40 * (double)rdf32(edi + 4u));
                wrf32(sp0 - 0xacu, (float)(double)(float)d43);
                d44 = fr(g, (double)(float)d37 + d35);
                d45 = (double)rdf32(eax + 4u);
                d46 = fr(g, d45 * (double)rdf32(loc_30 + rd32(eax) * 0x10u));
                d47 = fr(g, d44 * (double)rdf32(edi + 4u));
                wrf32(sp0 - 0xc4u, (float)(double)(float)d46);
                d48 = fr(g, d45 * (double)rdf32(loc_30 + rd32(eax) * 0x10u + 4u));
                wrf32(sp0 - 0xc0u, (float)(double)(float)d48);
                d49 = fr(g, d45 * (double)rdf32(loc_30 + rd32(eax) * 0x10u + 8u));
                wrf32(sp0 - 0xbcu, (float)(double)(float)d49);
                d50 = (double)rdf32(eax - 4u);
                d51 = fr(g, d50 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u));
                d52 = fr(g, d45 * (double)rdf32(loc_30 + rd32(eax) * 0x10u + 0xcu));
                wr32(sp0 - 0x38u, loc_38 + 1u);
                d53 = fr(g, d50 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u + 4u));
                wrf32(sp0 - 0x60u, (float)(double)(float)d53);
                d54 = fr(g, d50 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u + 8u));
                wrf32(sp0 - 0x5cu, (float)(double)(float)d54);
                d55 = fr(g, d50 * (double)rdf32(loc_30 + rd32(eax - 8u) * 0x10u + 0xcu));
                wrf32(sp0 - 0x58u, (float)(double)(float)d55);
                d56 = (double)(float)fr(g, d51 + (double)(float)d46);
                wrf32(sp0 - 0x74u, (float)d56);
                d57 = (double)(float)fr(g, (double)(float)d53 + (double)(float)d48);
                wrf32(sp0 - 0x70u, (float)d57);
                d58 = (double)(float)fr(g, (double)(float)d54 + (double)(float)d49);
                wrf32(sp0 - 0x6cu, (float)d58);
                wr32(sp0 - 0x40u, loc_40 + 0x10u);
                d59 = fr(g, d56 * (double)rdf32(edi - 4u));
                wrf32(sp0 - 0x94u, (float)(double)(float)d59);
                d60 = fr(g, d57 * (double)rdf32(edi - 4u));
                wrf32(sp0 - 0x90u, (float)(double)(float)d60);
                d61 = fr(g, d58 * (double)rdf32(edi - 4u));
                wrf32(sp0 - 0x8cu, (float)(double)(float)d61);
                d62 = fr(g, (double)(float)d55 + d52);
                d63 = fr(g, d62 * (double)rdf32(edi - 4u));
                d64 = (double)(float)fr(g, (double)(float)d59 + (double)(float)d41);
                wrf32(sp0 - 0xd4u, (float)d64);
                d65 = (double)(float)fr(g, (double)(float)d60 + (double)(float)d42);
                wrf32(sp0 - 0xd0u, (float)d65);
                d66 = (double)(float)fr(g, (double)(float)d61 + (double)(float)d43);
                wrf32(sp0 - 0xccu, (float)d66);
                d67 = (double)(float)fr(g, d63 + d47);
                wrf32(sp0 - 0xc8u, (float)d67);
                t68 = rd32(sp0 - 0x44u);
                esi = sp0 - 0xd4u;
                edi = loc_40;
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                if (loc_38 + 1u < rd32(rd32(t68 + 4u) + 0x1058u))
                {
                    eax = eax + 0x10u;
                    edi = loc_3c;
                    loc_38 = loc_38 + 1u;
                    loc_40 = loc_40 + 0x10u;
                    goto L_102e0176;
                }
                edx = loc_38 + 1u;
                edi = loc_3c;
                loc_38 = loc_38 + 1u;
    COW_AT(102e0334)
                esi = rd32(sp0 - 0x44u);
            }
    COW_AT(102e0337)
            t69 = rd32(sp0 - 0x24u);
            wr32(sp0 - 0xe4u, t69);
            wr32(sp0 - 0xe8u, 0u);
            wr32(sp0 - 0xecu, loc_2c);
            g->edx = edx;
            g->esp = sp0 - 0xe0u;
            cow_thiscall(g, rd32(rd32(rd32(esi + 4u)) + 8u), rd32(esi + 4u), 3, loc_2c, 0u, t69);
            t70 = g->edx;
            t71 = rd32(sp0 - 0x2cu) + 1u;
            wr32(sp0 - 0x2cu, t71);
            wr32(sp0 - 0x3cu, edi + 0x10u);
            if (t71 < rd32(rd32(esi + 4u) + 0x105cu))
            {
                edx = t70;
                loc_20 = rd32(sp0 - 0x20u);
                loc_2c = t71;
                loc_28 = rd32(sp0 - 0x28u);
                loc_1c = rd32(sp0 - 0x1cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_3c = edi + 0x10u;
                edi = edi + 0x10u;
                goto L_102e010f;
            }
            eax = rd32(esi + 4u);
            ecx = t71;
            edx = t70;
            loc_20 = rd32(sp0 - 0x20u);
        }
    COW_AT(102e0362)
        esi = 0u;
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
L_102e036b: ;
    COW_AT(102e036b)
        t72 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0xe4u, t72);
        g->eax = eax;
        g->esp = sp0 - 0xe0u;
        t73 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t72);
        t74 = g->ecx;
        t75 = g->edx;
        t76 = rd32(sp0 - 0x14u);
        wr32(sp0 - 0xe8u, t76);
        g->esp = sp0 - 0xe4u;
        t77 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t74, t75, 1, 1, t76);
        t78 = g->ecx;
        t79 = g->edx;
        t80 = rd32(sp0 - 0x18u);
        wr32(sp0 - 0xecu, t80);
        g->esp = sp0 - 0xe8u;
        t81 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t78, t79, 1, 1, t80);
        t82 = g->ecx;
        t83 = g->edx;
        t84 = rd32(sp0 - 0x20u);
        wr32(sp0 - 0xf0u, t84);
        g->esp = sp0 - 0xecu;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t82, t83, 1, 1, t84);
        t85 = g->edx;
        eax = esi;
        edx = t85;
        ebx = rd32(sp0 - 0xdcu);
        edi = rd32(sp0 - 0xe0u);
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_d8 = rd32(sp0 - 0xd8u);
    }
    else
    {
        loc_10 = t1;
    COW_AT(102dffde)
        eax = 0x80004005u;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_d8 = in_esi;
    }
    COW_AT(102e0392)
    wr32(g->fs_base, loc_10);
    g->ebx = ebx;
    g->esi = loc_d8;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e0366: ;
    COW_AT(102e0366)
    esi = 0x8007000eu;
    goto L_102e036b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102dffb9(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102dffdeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd8u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102dffe8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0xd8u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd8u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x44u, self);
        wr32(sp0 - 0x20u, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 8u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e0041u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0049u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e006eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0080u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0087u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0096u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_18;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        (void)sp0;
        return 1;
    }
    case 0x102e00bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        g->edi = COW_IMG(0x102d2a17u);
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e00c9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e00cbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e00dau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0106u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_30;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x28u, 0xffffffffu);
        wr32(sp0 - 0x1cu, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e010fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e011bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0122u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0136u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0145u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e014cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e015au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e016au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x38u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0176u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0334u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0337u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0362u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0366u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_24;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e036bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_3c = rd32(sp0 - 0x3cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0xe0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0392u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_d8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_d8 = rd32(sp0 - 0xd8u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xd8u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102dffb9(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102dffb9(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
