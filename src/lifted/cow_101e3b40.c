/* f_0x101e3b40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101e3b40(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
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
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 76u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e3b5du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 0x30u); in_ebx = rd32(sp0 - 0x2cu); g->ebp = rd32(sp0 - 0x30u); g->ebx = rd32(sp0 - 0x2cu); goto E_101e3b5d;
    case 0x101e3b70u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3b70;
    case 0x101e3b77u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3b77;
    case 0x101e3b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3b84;
    case 0x101e3b86u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; goto E_101e3b86;
    case 0x101e3b88u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3b88;
    case 0x101e3b8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_10 = rd32(sp0 - 0x10u); goto E_101e3b8b;
    case 0x101e3b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_10 = rd32(sp0 - 0x10u); goto E_101e3b92;
    case 0x101e3ba2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_10 = rd32(sp0 - 0x10u); goto E_101e3ba2;
    case 0x101e3bbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3bbc;
    case 0x101e3bc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3bc6;
    case 0x101e3be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3be0;
    case 0x101e3beau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3bea;
    case 0x101e3bf6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e3bf6;
    case 0x101e3c00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e3c00;
    case 0x101e3c1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_14 = rd32(sp0 - 0x14u); goto E_101e3c1b;
    case 0x101e3c27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3c27;
    case 0x101e3c31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3c31;
    case 0x101e3c35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3c35;
    case 0x101e3c3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3c3e;
    case 0x101e3c53u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e3c53;
    case 0x101e3c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e3c5d;
    case 0x101e3c73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); goto E_101e3c73;
    case 0x101e3c85u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3c85;
    case 0x101e3cbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_101e3cbf;
    case 0x101e3cc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_101e3cc9;
    case 0x101e3ce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101e3ce2;
    case 0x101e3d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101e3d03;
    case 0x101e3d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101e3d12;
    case 0x101e3d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101e3d18;
    case 0x101e3d20u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3d20;
    case 0x101e3d26u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3d26;
    case 0x101e3d2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3d2c;
    case 0x101e3d34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3d34;
    case 0x101e3d59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101e3d59;
    case 0x101e3d6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101e3d6b;
    case 0x101e3d88u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101e3d88;
    case 0x101e3d8cu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3d8c;
    case 0x101e3d96u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3d96;
    case 0x101e3d9du: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3d9d;
    case 0x101e3dbcu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101e3dbc;
    case 0x101e3dc5u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3dc5;
    case 0x101e3dd9u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3dd9;
    case 0x101e3ddfu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3ddf;
    case 0x101e3de3u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3de3;
    case 0x101e3e12u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3e12;
    case 0x101e3e1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_101e3e1f;
    case 0x101e3e3eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101e3e3e;
    case 0x101e3e78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); goto E_101e3e78;
    case 0x101e3ed4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); goto E_101e3ed4;
    case 0x101e3ed8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_8 = rd32(sp0 - 8u); goto E_101e3ed8;
    case 0x101e3eedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e3eed;
    case 0x101e3effu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101e3eff;
    case 0x101e3f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3f2f;
    case 0x101e3f33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101e3f33;
    default: break;
    }
#endif

    COW_AT(101e3b40)
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x10u, self);
    wr8(self + 0x64u, 1u);
    g->esp = sp0 - 0x38u;
    cow_fastcall(g, COW_IMG(0x101e35b0u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x54u) != 0u)
    {
        ecx = t1;
        edx = t2;
        esi = in_esi;
        edi = in_edi;
        loc_2c = in_ebx;
        loc_30 = in_ebp;
        loc_34 = in_esi;
        loc_38 = in_edi;
        loc_10 = self;
    }
    else
    {
        eax = rd32(self + 0x54u);
        ecx = t1;
        edx = t2;
    COW_AT(101e3b5d)
        wr32(sp0 - 0x3cu, 0x1a94u);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x1a94u, in_edi, in_esi);
        t4 = g->ecx;
        t5 = g->edx;
        if (t3 == 0u)
        {
            ecx = t4;
            edx = t5;
    COW_AT(101e3b86)
            ebp = 0u;
            esi = in_esi;
            edi = in_edi;
        }
        else
        {
            eax = t3;
            edx = t5;
            ebp = t3;
    COW_AT(101e3b70)
            esi = ebp;
            edi = 0x51u;
L_101e3b77: ;
    COW_AT(101e3b77)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t6 = cow_thiscall(g, COW_IMG(0x101f4af0u), esi, 0);
            t7 = g->ecx;
            t8 = g->edx;
            if (edi != 1u)
            {
                eax = t6;
                edx = t8;
                esi = esi + 0x54u;
                edi = edi - 1u;
                goto L_101e3b77;
            }
            ecx = t7;
            edx = t8;
            esi = esi + 0x54u;
            edi = edi - 1u;
    COW_AT(101e3b84)
        }
    COW_AT(101e3b88)
        wr32(self + 0x54u, ebp);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(101e3b8b)
    if (rd32(self + 0x58u) == 0u)
    {
        eax = rd32(self + 0x58u);
    COW_AT(101e3b92)
        wr32(sp0 - 0x3cu, 0x747u);
        g->eax = eax;
        g->esp = sp0 - 0x30u;
        t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x747u, loc_38, loc_34);
        t10 = g->edx;
        wr32(self + 0x58u, t9);
        edx = t10;
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_10 = rd32(sp0 - 0x10u);
    }
    COW_AT(101e3ba2)
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, sp0 - 0x27u);
    wr32(sp0 - 0x44u, sp0 - 0x28u);
    wr32(sp0 - 0x48u, 0u);
    g->eax = sp0 - 0x27u;
    g->esp = sp0 - 0x38u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), sp0 - 0x28u, 4, 0u, sp0 - 0x28u, sp0 - 0x27u, 1u);
    t12 = g->ecx;
    if ((uint8_t)t11 != 0u)
    {
        ecx = t12;
    }
    else
    {
        ecx = t12;
    COW_AT(101e3bbc)
        wr8(sp0 - 0x28u, 0xffu);
        wr8(sp0 - 0x27u, 0xffu);
    }
    COW_AT(101e3bc6)
    wr32(sp0 - 0x3cu, 2u);
    wr32(sp0 - 0x40u, sp0 - 0x25u);
    wr32(sp0 - 0x44u, sp0 - 0x26u);
    wr32(sp0 - 0x48u, 0u);
    g->eax = sp0 - 0x26u;
    g->edx = sp0 - 0x25u;
    g->esp = sp0 - 0x38u;
    t13 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), ecx, 4, 0u, sp0 - 0x26u, sp0 - 0x25u, 2u);
    t14 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        edx = t14;
    }
    else
    {
        eax = t13;
        edx = t14;
    COW_AT(101e3be0)
        wr8(sp0 - 0x26u, 0xffu);
        wr8(sp0 - 0x25u, 0xffu);
    }
    COW_AT(101e3bea)
    wr32(self + 0x50u, 0u);
    wr8(sp0 - 0x24u, 0u);
    ebx = self;
L_101e3bf6: ;
    COW_AT(101e3bf6)
    if ((int32_t)rd32(ebx + 0x50u) >= 81) goto L_101e3eff;
    COW_AT(101e3c00)
    t15 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x3cu, t15);
    g->eax = eax;
    g->ecx = t15;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t16 = cow_cdecl(g, COW_IMG(0x101e3ac0u), 1, t15);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x14u, t16);
    if (t16 == 0u)
    {
        eax = t16;
        edx = t18;
        esi = t16;
        goto L_101e3eed;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    esi = t16;
    loc_14 = t16;
    COW_AT(101e3c1b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t19 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t20 = g->ecx;
    t21 = g->edx;
    if ((t19 & 0x200000u) != 0u)
    {
        eax = t19;
        goto L_101e3c35;
    }
    eax = t19;
    ecx = t20;
    edx = t21;
    COW_AT(101e3c27)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t22 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t23 = g->edx;
    if ((t22 >> 8u & 8u) != 0u)
    {
        eax = t22;
        goto L_101e3c35;
    }
    edx = t23;
    COW_AT(101e3c31)
    eax = 0u;
L_101e3c3e: ;
    COW_AT(101e3c3e)
    wr32(sp0 - 4u, (uint32_t)(int16_t)eax);
    wr32(sp0 - 0xcu, 0u);
    if ((int16_t)eax <= 0)
    {
        eax = (uint32_t)(int16_t)eax;
        goto L_101e3eed;
    }
    ecx = 0u;
    loc_4 = (uint32_t)(int16_t)eax;
    eax = (uint32_t)(int16_t)eax;
    loc_c = 0u;
L_101e3c53: ;
    COW_AT(101e3c53)
    if ((int32_t)rd32(ebx + 0x50u) >= 81) goto L_101e3eed;
    COW_AT(101e3c5d)
    wr32(sp0 - 0x3cu, ecx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t24 = cow_thiscall(g, COW_IMG(0x1021cb80u), esi, 1, ecx);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(sp0 - 0x20u, t24);
    if (t24 == 0u)
    {
        edx = t26;
        edi = t24;
        goto L_101e3ed8;
    }
    eax = t24;
    ecx = t25;
    edx = t26;
    edi = t24;
    loc_20 = t24;
    COW_AT(101e3c73)
    wr32(sp0 - 0x3cu, edi);
    wr32(sp0 - 0x40u, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t27 = cow_cdecl(g, COW_IMG(0x101e3b10u), 2, esi, edi);
    t28 = g->edx;
    if ((uint8_t)t27 == 0u)
    {
        edx = t28;
        goto L_101e3ed8;
    }
    COW_AT(101e3c85)
    wr32(sp0 - 0x1cu, 0x80808080u);
    t29 = rd32(ebx + 0x50u) * 0x54u + rd32(ebx + 0x54u);
    wr32(sp0 - 8u, t29);
    if (rd8(edi + 2u) == 0u)
    {
        edx = rd32(ebx + 0x54u);
        goto L_101e3ed4;
    }
    eax = (rd32(ebx + 0x50u) & 0xffffff00u) | rd8(edi + 2u);
    edx = rd32(ebx + 0x54u);
    ebp = rd32(ebx + 0x50u) * 0x17u + rd32(ebx + 0x58u);
    loc_8 = t29;
    COW_AT(101e3cbf)
    if (rd8(edi + 8u) == 0x19u) goto L_101e3ed4;
    COW_AT(101e3cc9)
    wr32(sp0 - 0x3cu, rd16(edi));
    g->eax = eax;
    g->edx = rd16(edi);
    t30 = rd32(COW_IMG(0x10621808u));
    t31 = rd16(edi);
    g->esp = sp0 - 0x38u;
    t32 = cow_thiscall(g, COW_IMG(0x1015bc40u), t30, 1, t31);
    t33 = g->ecx;
    t34 = g->edx;
    if (t32 == 0u)
    {
        edx = t34;
        goto L_101e3ed4;
    }
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(101e3ce2)
    t35 = rd8(eax + 0x1b3u);
    wr8(eax + 0x1b3u, (uint8_t)(t35 + 1u));
    t36 = rd16(eax + 4u);
    wr8(eax + 0x1b3u, (uint8_t)((uint8_t)(t35 + 1u) - 1u));
    if ((uint16_t)t36 != 6u) goto L_101e3ed4;
    ecx = (ecx & 0xffffff00u) | (uint8_t)((uint8_t)(t35 + 1u) - 1u);
    COW_AT(101e3d03)
    if (rd8(edi + 2u) != rd8(sp0 - 0x28u))
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 2u);
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x24u);
        loc_1c = rd32(sp0 - 0x1cu);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(edi + 2u);
        ecx = (ecx & 0xffffff00u) | rd8(sp0 - 0x24u);
    COW_AT(101e3d12)
        if ((uint8_t)ecx != rd8(sp0 - 0x27u))
        {
            loc_1c = rd32(sp0 - 0x1cu);
        }
        else
        {
    COW_AT(101e3d18)
            wr32(sp0 - 0x1cu, 0x80509050u);
            loc_1c = 0x80509050u;
        }
    }
    COW_AT(101e3d20)
    if ((uint8_t)eax == rd8(sp0 - 0x26u))
    {
    COW_AT(101e3d26)
        if ((uint8_t)ecx == rd8(sp0 - 0x25u))
        {
    COW_AT(101e3d2c)
            wr32(sp0 - 0x1cu, 0x80509050u);
            loc_1c = 0x80509050u;
        }
    }
    COW_AT(101e3d34)
    wr8(ebp, (uint8_t)eax);
    wr8(ebp + 1u, (uint8_t)ecx);
    wr32(sp0 - 0x3cu, rd8(ebp));
    t37 = (uint8_t)rd32(sp0 - 0x24u);
    wr32(sp0 - 0x40u, t37);
    g->eax = rd8(ebp);
    g->ecx = t37;
    g->edx = edx;
    t38 = rd8(ebp);
    g->esp = sp0 - 0x38u;
    t39 = cow_cdecl(g, COW_IMG(0x101cb7a0u), 2, t37, t38);
    t40 = g->ecx;
    t41 = g->edx;
    if (t39 != 0u)
    {
        ecx = t40;
        ebx = t39;
        goto L_101e3d6b;
    }
    edx = t41;
    ebx = t39;
    COW_AT(101e3d59)
    wr8(ebp + 2u, 5u);
    wr32(sp0 - 0x18u, ebp + 3u);
    wr8(ebp + 3u, (uint8_t)ebx);
    eax = ebp + 3u;
    esi = 0x80808080u;
    loc_18 = ebp + 3u;
    loc_1c = rd32(sp0 - 0x1cu);
L_101e3e78: ;
    COW_AT(101e3e78)
    wr32(sp0 - 0x3cu, esi);
    t55 = rd32(sp0 - 8u);
    wr32(t55 + 0x48u, ebp);
    wr32(sp0 - 0x40u, rd16(edi));
    wr32(sp0 - 0x44u, 0x46u);
    wr32(sp0 - 0x48u, 0u);
    g->esp = sp0 - 0x38u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), t55, edx, 4, 0u, 0x46u, rd16(edi), esi);
    t56 = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x3cu, t56);
    wr32(sp0 - 0x40u, rd16(edi));
    wr32(sp0 - 0x44u, 0x19u);
    wr32(sp0 - 0x48u, 1u);
    g->eax = rd16(edi);
    t57 = rd16(edi);
    t58 = cow_fastcall(g, COW_IMG(0x101f4b20u), t55, t56, 4, 1u, 0x19u, t57, t56);
    t59 = g->edx;
    wr32(sp0 - 0x3cu, 0x80808080u);
    t60 = rd32(sp0 - 0x18u);
    wr32(sp0 - 0x40u, t60);
    wr32(sp0 - 0x44u, 0x27u);
    wr32(sp0 - 0x48u, 2u);
    t61 = cow_fastcall(g, COW_IMG(0x101f4b20u), t55, t59, 4, 2u, 0x27u, t60, 0x80808080u);
    t62 = g->ecx;
    t63 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0xeu);
    g->edx = t63;
    t64 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, 0u);
    t65 = g->edx;
    wr32(t55 + 0x4cu, t64);
    t66 = rd32(sp0 - 0x10u);
    wr32(t66 + 0x50u, rd32(t66 + 0x50u) + 1u);
    edx = t65;
    ebx = t66;
L_101e3ed4: ;
    COW_AT(101e3ed4)
    esi = rd32(sp0 - 0x14u);
L_101e3ed8: ;
    COW_AT(101e3ed8)
    t67 = rd32(sp0 - 0xcu) + 1u;
    t68 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0xcu, t67);
    if ((int32_t)(t68 + 1u) < (int32_t)rd32(sp0 - 4u))
    {
        eax = rd32(sp0 - 4u);
        ecx = t67;
        loc_4 = rd32(sp0 - 4u);
        loc_c = t67;
        goto L_101e3c53;
    }
    eax = rd32(sp0 - 4u);
L_101e3eed: ;
    COW_AT(101e3eed)
    t69 = rd8(sp0 - 0x24u);
    wr8(sp0 - 0x24u, (uint8_t)(t69 + 1u));
    if ((uint8_t)(t69 + 1u) < 0x12u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)(t69 + 1u);
        goto L_101e3bf6;
    }
L_101e3eff: ;
    COW_AT(101e3eff)
    wr32(sp0 - 0x3cu, 1u);
    t70 = (edx & 0xffff0000u) | rd16(ebx + 0x50u);
    wr32(sp0 - 0x40u, t70);
    t71 = rd32(ebx + 0x54u);
    wr32(sp0 - 0x44u, t71);
    g->esi = esi;
    g->edi = edi;
    g->eax = t71;
    g->esp = sp0 - 0x38u;
    t72 = cow_fastcall(g, COW_IMG(0x101f7020u), ebx, t70, 3, t71, t70, 1u);
    t73 = g->ecx;
    t74 = g->edx;
    wr32(sp0 - 0x3cu, 0x68u);
    wr32(sp0 - 0x40u, 7u);
    t75 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x68u);
    wr32(ebx + 0x3cu, t75);
    t76 = rd8(ebx + 0x64u);
    wr8(ebx + 0x44u, 0x20u);
    wr8(ebx + 0x45u, 0x18u);
    if ((uint8_t)t76 != 0u)
    {
    COW_AT(101e3f2f)
        wr8(ebx + 0x65u, rd8(ebx + 0x65u) & 0xfdu);
    }
    COW_AT(101e3f33)
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return;
L_101e3c35: ;
    COW_AT(101e3c35)
    eax = (eax & 0xffff0000u) | rd8(esi + rd32(esi + 0xcu) + 0x18u);
    edx = rd32(esi + 0xcu);
    goto L_101e3c3e;
L_101e3d6b: ;
    COW_AT(101e3d6b)
    wr32(sp0 - 0x3cu, rd32(ebx));
    t42 = rd32(sp0 - 0x24u);
    wr32(sp0 - 0x40u, t42);
    t43 = (ecx & 0xffffff00u) | rd8(ebp);
    wr32(sp0 - 0x44u, t43);
    g->ebx = ebx;
    g->eax = t42;
    g->edx = rd32(ebx);
    t44 = rd32(ebx);
    g->esp = sp0 - 0x38u;
    t45 = cow_cdecl(g, COW_IMG(0x101e3a20u), 3, t43, t42, t44);
    t46 = g->edx;
    if ((uint8_t)t45 == 0u)
    {
        edx = t46;
        loc_1c = rd32(sp0 - 0x1cu);
    }
    else
    {
        edx = t46;
    COW_AT(101e3d88)
        wr32(sp0 - 0x1cu, 0x80404040u);
        loc_1c = 0x80404040u;
    }
    COW_AT(101e3d8c)
    if (rd8(ebx + 8u) > 3u) goto L_101e3e12;
    ecx = rd8(ebx + 8u);
    COW_AT(101e3d96)
    t47 = rd32(COW_IMG(0x101e3f3cu) + ecx * 4u);
    switch (t47 - RD)
    {
    case 0x101e3d9du: goto L_101e3d9d;
    case 0x101e3dc5u: goto L_101e3dc5;
    case 0x101e3dd9u: goto L_101e3dd9;
    case 0x101e3ddfu: goto L_101e3ddf;
    default: rt_fatal(g, COW_IMG(0x101e3d96u), "switch");
    }
    return;
L_101e3d9d: ;
    COW_AT(101e3d9d)
    t52 = rd32(sp0 - 0x20u);
    wr8(ebp + 2u, 0u);
    wr32(sp0 - 0x18u, ebp + 3u);
    wr8(ebp + 3u, 0u);
    if (rd8(sp0 - 0x28u) == 0xffu)
    {
        eax = 0x80404040u;
        esi = 0x80808080u;
        edi = t52;
        loc_18 = ebp + 3u;
    }
    else
    {
        edi = t52;
        loc_18 = ebp + 3u;
    COW_AT(101e3dbc)
        wr32(sp0 - 0x1cu, 0x80404040u);
        eax = 0x80404040u;
        esi = 0x80808080u;
        loc_1c = 0x80404040u;
    }
    goto L_101e3e78;
L_101e3dc5: ;
    COW_AT(101e3dc5)
    wr8(ebp + 2u, 1u);
    wr32(sp0 - 0x3cu, ebx + 9u);
    g->eax = 0x80404040u;
    g->esp = sp0 - 0x38u;
    t51 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), ecx, 1, ebx + 9u);
    esi = t51;
    loc_1c = rd32(sp0 - 0x1cu);
L_101e3e1f: ;
    COW_AT(101e3e1f)
    wr32(sp0 - 0x18u, ebp + 3u);
    edi = ebp + 3u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t53 = rd8(ebx + 7u) & 0xfu;
    esi = t53 * 0xdu + 0x38u;
    loc_18 = ebp + 3u;
L_101e3e3e: ;
    COW_AT(101e3e3e)
    t54 = rd16(ebx + 6u);
    eax = ((t54 & 0xfu) * 0xdu << 0x10u) + 0x380000u;
    edx = (t54 & 0xfu) * 3u;
    esi = esi | (t54 >> 4u & 0xfu) * 0xd00u + 0x3800u | ((t54 & 0xfu) * 0xdu << 0x10u) + 0x380000u | 0x80000000u;
    edi = rd32(sp0 - 0x20u);
    goto L_101e3e78;
L_101e3dd9: ;
    COW_AT(101e3dd9)
    wr8(ebp + 2u, 2u);
L_101e3de3: ;
    COW_AT(101e3de3)
    wr32(sp0 - 0x3cu, ebx + 9u);
    g->eax = 0x80404040u;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t48 = cow_thiscall_cdecl(g, COW_IMG(0x101c8fb0u), ebx + 9u, 1, ebx + 9u);
    t49 = g->edx;
    wr32(sp0 - 0x18u, ebp + 3u);
    esi = t48;
    edi = ebp + 3u;
    ecx = 5u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t50 = rd8(ebx + 7u) & 0xfu;
    esi = t50 * 0xdu + 0x38u;
    loc_18 = ebp + 3u;
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_101e3e3e;
L_101e3ddf: ;
    COW_AT(101e3ddf)
    wr8(ebp + 2u, 3u);
    goto L_101e3de3;
L_101e3e12: ;
    COW_AT(101e3e12)
    wr8(ebp + 2u, 4u);
    wr32(sp0 - 0x1cu, 0x80404040u);
    esi = COW_IMG(0x1037f328u);
    loc_1c = 0x80404040u;
    goto L_101e3e1f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e3b40(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e3b5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 0x30u);
        in_ebx = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x38u, in_edi);
        wr32(sp0 - 0x34u, in_esi);
        wr32(sp0 - 0x10u, self);
        (void)sp0;
        return 1;
    }
    case 0x101e3b70u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3b77u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3b84u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3b86u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3b88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3b8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3b92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3ba2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_10;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_10 = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3bbcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x27u);
        (void)sp0;
        return 1;
    }
    case 0x101e3bc6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x44u, sp0 - 0x28u);
        wr32(sp0 - 0x40u, sp0 - 0x27u);
        (void)sp0;
        return 1;
    }
    case 0x101e3be0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x44u, sp0 - 0x26u);
        wr32(sp0 - 0x40u, sp0 - 0x25u);
        (void)sp0;
        return 1;
    }
    case 0x101e3beau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        wr32(sp0 - 0x44u, sp0 - 0x26u);
        wr32(sp0 - 0x40u, sp0 - 0x25u);
        (void)sp0;
        return 1;
    }
    case 0x101e3bf6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c00u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c1bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c31u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c35u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c3eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c53u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3c85u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3cbfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        wr32(sp0 - 0x1cu, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x101e3cc9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        wr32(sp0 - 0x1cu, 0x80808080u);
        (void)sp0;
        return 1;
    }
    case 0x101e3ce2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d03u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d12u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d18u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d20u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d26u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d2cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d34u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d59u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d6bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d88u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d8cu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d96u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3d9du:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3dbcu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_18;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        g->esi = 0x80808080u;
        (void)sp0;
        return 1;
    }
    case 0x101e3dc5u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x101e3dd9u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x101e3ddfu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x101e3de3u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x101e3e12u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        g->eax = 0x80404040u;
        (void)sp0;
        return 1;
    }
    case 0x101e3e1fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3e3eu:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101e3e78u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3ed4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3ed8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3eedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3effu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3f2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x101e3f33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101e3b40(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101e3b40(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
