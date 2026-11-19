/* f_0x1012b4b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1012b4b0(Guest* g)
{
    double d85;
    double d88;
    double d89;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t86;
    uint32_t t87;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012b4c8u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1012b4c8;
    case 0x1012b4deu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1012b4de;
    case 0x1012b4e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; self = g->esi; in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1012b4e6;
    case 0x1012b4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x14u); in_esi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x10u); goto E_1012b4f4;
    case 0x1012b513u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; goto E_1012b513;
    case 0x1012b52bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b52b;
    case 0x1012b536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b536;
    case 0x1012b54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1012b54e;
    case 0x1012b55fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1012b55f;
    case 0x1012b56cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b56c;
    case 0x1012b577u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1012b577;
    case 0x1012b580u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1012b580;
    case 0x1012b58bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1012b58b;
    case 0x1012b596u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; goto E_1012b596;
    case 0x1012b5a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5a4;
    case 0x1012b5a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5a8;
    case 0x1012b5adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5ad;
    case 0x1012b5b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5b8;
    case 0x1012b5c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5c4;
    case 0x1012b5d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5d6;
    case 0x1012b5e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5e0;
    case 0x1012b5f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5f2;
    case 0x1012b5fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5fd;
    case 0x1012b5ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b5ff;
    case 0x1012b611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b611;
    case 0x1012b618u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b618;
    case 0x1012b61bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b61b;
    case 0x1012b61eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b61e;
    case 0x1012b624u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b624;
    case 0x1012b62au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b62a;
    case 0x1012b62eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b62e;
    case 0x1012b644u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b644;
    case 0x1012b64eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b64e;
    case 0x1012b655u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b655;
    case 0x1012b65du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b65d;
    case 0x1012b65fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b65f;
    case 0x1012b690u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b690;
    case 0x1012b698u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b698;
    case 0x1012b69eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b69e;
    case 0x1012b6a9u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6a9;
    case 0x1012b6acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6ac;
    case 0x1012b6b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6b5;
    case 0x1012b6bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6bd;
    case 0x1012b6bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6bf;
    case 0x1012b6c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6c3;
    case 0x1012b6cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6cd;
    case 0x1012b6ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6eb;
    case 0x1012b6f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b6f5;
    case 0x1012b6fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b6fc;
    case 0x1012b701u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b701;
    case 0x1012b710u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b710;
    case 0x1012b71fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b71f;
    case 0x1012b72du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b72d;
    case 0x1012b73au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b73a;
    case 0x1012b73fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b73f;
    case 0x1012b75cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b75c;
    case 0x1012b76eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b76e;
    case 0x1012b793u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b793;
    case 0x1012b7a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b7a8;
    case 0x1012b7c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1012b7c2;
    case 0x1012b7deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b7de;
    case 0x1012b7e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b7e3;
    case 0x1012b7fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b7fa;
    case 0x1012b815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b815;
    case 0x1012b825u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b825;
    case 0x1012b83cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b83c;
    case 0x1012b852u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b852;
    case 0x1012b858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b858;
    case 0x1012b864u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b864;
    case 0x1012b86bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_1012b86b;
    default: break;
    }
#endif

    COW_AT(1012b4b0)
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) != 1u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012b4de)
        if (rd32(COW_IMG(0x10578178u)) != 1u)
        {
            edx = in_edx;
        }
        else
        {
    COW_AT(1012b4e6)
            t3 = rd32(self + 8u);
            wr32(sp0 - 0x18u, t3);
            g->edx = t3;
            g->esp = sp0 - 0x14u;
            cow_call_regs(g, COW_IMG(0x1015e530u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, t3);
            t4 = g->edx;
            edx = t4;
        }
    }
    else
    {
        eax = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012b4c8)
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 1u);
        t1 = rd32(self + 8u);
        wr32(sp0 - 0x28u, t1);
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t1, 1u, 1u, 0u, 0u);
        t2 = g->edx;
        edx = t2;
    }
    COW_AT(1012b4f4)
    t5 = rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u);
    wr32(COW_IMG(0x10578178u), t5);
    g->eax = t5;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t7 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edx = t7;
        goto L_1012b52b;
    }
    eax = t6;
    COW_AT(1012b513)
    wr32(sp0 - 0x18u, 1u);
    t8 = rd32(self + 8u);
    wr32(sp0 - 0x1cu, t8);
    g->edx = t8;
    g->esp = sp0 - 0x14u;
    t9 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    t10 = g->edx;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = in_ebp;
    g->edx = t10;
    return t9;
L_1012b52b: ;
    COW_AT(1012b52b)
    if (rd32(eax + 0x70u) == 0u)
    {
        ebp = in_ebp;
        goto L_1012b86b;
    }
    ebx = rd32(eax + 0x70u);
    COW_AT(1012b536)
    wr16(self + 0x50u, 3u);
    wr32(sp0 - 0x18u, in_ebp);
    g->esp = sp0 - 0x18u;
    t11 = cow_call_regs(g, COW_IMG(0x10158470u), eax, rd32(COW_IMG(0x1057876cu)), edx, 1, 0);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        edx = t12;
        edi = 0u;
        goto L_1012b5ad;
    }
    eax = t11;
    edx = t12;
    COW_AT(1012b54e)
    g->eax = eax;
    g->edx = edx;
    t13 = rd32(COW_IMG(0x1057876cu));
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, COW_IMG(0x101598b0u), t13, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0u)
    {
        edx = t16;
        edi = 0u;
        goto L_1012b5ad;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    ebp = t14;
    COW_AT(1012b55f)
    wr32(sp0 - 0x1cu, ebp);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t17 = cow_call_regs(g, COW_IMG(0x101cc220u), eax, g->ecx, g->edx, 1, 3, ebp, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t18 = g->edx;
    if ((uint8_t)t17 == 0u)
    {
        eax = t17;
        edx = t18;
        goto L_1012b577;
    }
    edx = t18;
    COW_AT(1012b56c)
    wr16(self + 0x50u, 2u);
    edi = 2u;
L_1012b5ad: ;
    COW_AT(1012b5ad)
    t21 = rd32(ebx + 0x170u);
    if (t21 == 1u) goto L_1012b5f2;
    eax = t21 - 1u;
    ecx = t21;
    COW_AT(1012b5b8)
    wr32(sp0 - 0x1cu, ecx);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t22 = cow_thiscall(g, COW_IMG(0x10095680u), ebx, 1, ecx);
    t23 = g->edx;
    if ((uint8_t)t22 != 0u)
    {
        edx = t23;
        goto L_1012b5e0;
    }
    edx = t23;
    COW_AT(1012b5c4)
    t24 = rd32(ebx + 0x170u);
    wr32(sp0 - 0x1cu, t24);
    g->eax = t24;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t25 = cow_thiscall(g, COW_IMG(0x100956a0u), ebx, 1, t24);
    t26 = g->edx;
    if ((uint8_t)t25 != 0u)
    {
        edx = t26;
        goto L_1012b5e0;
    }
    eax = t25;
    edx = t26;
    COW_AT(1012b5d6)
    wr8(COW_IMG(0x10578174u), (uint8_t)eax);
    ecx = edi * 2u;
L_1012b5fd: ;
    COW_AT(1012b5fd)
    eax = 0u;
L_1012b5ff: ;
    COW_AT(1012b5ff)
    wr32(sp0 - 0x1cu, ecx);
    wr32(sp0 - 0x20u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t27 = cow_fastcall(g, COW_IMG(0x1012b2d0u), self, edx, 2, eax, ecx);
    t28 = g->ecx;
    t29 = g->edx;
    if (rd8(sp0 + 4u) == 0u)
    {
        eax = t27;
        ecx = t28;
        edx = t29;
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
        ebp = rd32(sp0 - 0x18u);
    }
    else
    {
        ecx = t28;
        edx = t29;
        ebx = (ebx & 0xffffff00u) | rd8(sp0 + 4u);
        ebp = rd32(sp0 - 0x18u);
    COW_AT(1012b611)
        if ((uint32_t)(int16_t)rd16(self + 0x50u) == 1u)
        {
            eax = (uint32_t)(int16_t)rd16(self + 0x50u) - 1u;
            goto L_1012b62a;
        }
        eax = (uint32_t)(int16_t)rd16(self + 0x50u) - 1u;
    COW_AT(1012b618)
        if (eax == 1u)
        {
            eax = eax - 1u;
            goto L_1012b624;
        }
        eax = eax - 1u;
    COW_AT(1012b61b)
        if (eax != 1u)
        {
            eax = eax - 1u;
            goto L_1012b644;
        }
        eax = eax - 1u;
    COW_AT(1012b61e)
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 5u);
        loc_1c = 5u;
L_1012b62e: ;
    COW_AT(1012b62e)
        wr32(sp0 - 0x20u, 0xdu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, loc_1c);
        t31 = g->edx;
        wr32(sp0 - 0x1cu, t30);
        g->edx = t31;
        t32 = rd32(COW_IMG(0x1057847cu));
        g->esp = sp0 - 0x14u;
        t33 = cow_thiscall(g, COW_IMG(0x10150cc0u), t32, 2, t30, 0u);
        t34 = g->ecx;
        t35 = g->edx;
        eax = t33;
        ecx = t34;
        edx = t35;
    }
L_1012b644: ;
    COW_AT(1012b644)
    if (rd8(self + 0x53u) == rd8(self + 0x54u))
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x53u);
    COW_AT(1012b64e)
        if (rd32(self + 8u) != 0u)
        {
            ecx = rd32(self + 8u);
    COW_AT(1012b655)
            if ((int32_t)((uint8_t)eax - 1u) >= 0)
            {
                eax = (uint8_t)eax - 1u;
            }
            else
            {
    COW_AT(1012b65d)
                eax = 0u;
            }
    COW_AT(1012b65f)
            t36 = COW_IMG(0x1036f3f8u) + eax * 0x20u;
            wr32(sp0 - 0x18u, t36);
            g->ebp = ebp;
            g->eax = t36;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t37 = cow_thiscall(g, COW_IMG(0x1011a8f0u), ecx, 1, t36);
            t38 = g->edx;
            wr32(sp0 - 0x18u, 0u);
            t39 = (t37 & 0xffff0000u) | rd16(rd32(self + 8u) + 0x4cu);
            wr32(sp0 - 0x1cu, t39);
            g->ebx = ebx;
            g->edx = t38;
            t40 = cow_call_regs(g, COW_IMG(0x10118db0u), t39, rd32(self + 8u), g->edx, 0, 2, t39, 0u);
            t41 = g->edx;
            t42 = rd32(self + 8u);
            wr32(sp0 - 0x18u, t42);
            wr32(sp0 - 0x1cu, 0u);
            g->edx = t41;
            t43 = cow_thiscall(g, COW_IMG(0x1015f760u), COW_IMG(0x10621838u), 2, 0u, t42);
            t44 = g->edx;
            wr8(self + 0x52u, 1u);
            eax = t43;
            edx = t44;
        }
    }
    COW_AT(1012b690)
    if ((uint8_t)ebx != 0u)
    {
    COW_AT(1012b698)
        if (rd8(self + 0x52u) == 1u) goto L_1012b6cd;
    COW_AT(1012b69e)
        if ((int32_t)rd8(self + 0x53u) <= 0)
        {
            eax = 0u;
            edx = rd8(self + 0x53u);
        }
        else
        {
            edx = rd8(self + 0x53u);
    COW_AT(1012b6a9)
            eax = 0u;
            ecx = self + 0x1cu;
L_1012b6ac: ;
    COW_AT(1012b6ac)
            if (rd16(ecx) != rd16(ecx + 0x1au)) goto L_1012b6bf;
            edi = (edi & 0xffff0000u) | rd16(ecx);
    COW_AT(1012b6b5)
            if ((int32_t)(eax + 1u) < (int32_t)edx)
            {
                eax = eax + 1u;
                ecx = ecx + 2u;
                goto L_1012b6ac;
            }
            eax = eax + 1u;
    COW_AT(1012b6bd)
        }
L_1012b6c3: ;
    COW_AT(1012b6c3)
        if (rd8(self + 0x52u) != 1u) goto L_1012b75c;
L_1012b6cd: ;
    COW_AT(1012b6cd)
        if (rd16(COW_IMG(0x1036f244u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 2u + 0x1au) * 0xcu) != 0x1bu)
        {
            eax = (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 2u + 0x1au);
            ecx = (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 2u + 0x1au) * 3u;
            edx = rd32(self + 8u);
            edi = rd16(COW_IMG(0x1036f244u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 2u + 0x1au) * 0xcu);
    COW_AT(1012b6fc)
            if (edi == 0x1eu)
            {
    COW_AT(1012b701)
                t48 = rd32(COW_IMG(0x1057876cu));
                g->esp = sp0 - 0x14u;
                t49 = cow_call_regs(g, COW_IMG(0x10158470u), eax, t48, edx, 1, 0);
                t50 = g->ecx;
                t51 = g->edx;
                if ((uint8_t)t49 == 0u)
                {
                    eax = t49;
                    ecx = t50;
                    edx = t51;
                }
                else
                {
                    eax = t49;
                    edx = t51;
    COW_AT(1012b710)
                    g->eax = eax;
                    g->edx = edx;
                    t52 = rd32(COW_IMG(0x1057876cu));
                    g->esp = sp0 - 0x14u;
                    t53 = cow_thiscall(g, COW_IMG(0x101598b0u), t52, 0);
                    t54 = g->ecx;
                    t55 = g->edx;
                    if (t53 == 0u)
                    {
                        eax = t53;
                        ecx = t54;
                        edx = t55;
                    }
                    else
                    {
                        eax = t53;
                        ecx = t54;
    COW_AT(1012b71f)
                        if ((rd32(eax + 0x13cu) & 0x40u) != 0x40u)
                        {
                            edx = rd32(eax + 0x13cu) & 0x40u;
                        }
                        else
                        {
                            edx = rd32(eax + 0x13cu) & 0x40u;
    COW_AT(1012b72d)
                            wr32(sp0 - 0x18u, eax);
                            g->eax = eax;
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            t56 = cow_thiscall_cdecl(g, COW_IMG(0x10133a40u), ecx, 1, eax);
                            t57 = g->ecx;
                            t58 = g->edx;
                            if ((uint8_t)t56 != 0u)
                            {
                                eax = t56;
                                ecx = t57;
                                edx = t58;
                            }
                            else
                            {
                                eax = t56;
                                ecx = t57;
                                edx = t58;
    COW_AT(1012b73a)
                                edi = 0x327u;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            eax = (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 2u + 0x1au);
            ecx = (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 2u + 0x1au) * 3u;
            edx = rd32(self + 8u);
            edi = rd16(COW_IMG(0x1036f244u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) * 2u + 0x1au) * 0xcu);
    COW_AT(1012b6eb)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t45 = cow_stdcall(g, COW_IMG(0x10201690u), 0);
            t46 = g->ecx;
            t47 = g->edx;
            if (t45 == 3u)
            {
                eax = t45;
                ecx = t46;
                edx = t47;
            }
            else
            {
                eax = t45;
                ecx = t46;
                edx = t47;
    COW_AT(1012b6f5)
                edi = 0x1cu;
            }
        }
    COW_AT(1012b73f)
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, edi);
        wr32(sp0 - 0x20u, 0xeu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t59 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, edi);
        t60 = g->edx;
        wr32(sp0 - 0x1cu, t59);
        g->edx = t60;
        g->esp = sp0 - 0x14u;
        t61 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t59, 0u);
        t62 = g->edx;
        wr8(self + 0x52u, 0u);
        eax = t61;
        edx = t62;
    }
L_1012b75c: ;
    COW_AT(1012b75c)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t63 = cow_thiscall(g, COW_IMG(0x1015edb0u), COW_IMG(0x10621838u), 0);
    t64 = g->edx;
    if ((uint8_t)t63 == 0u)
    {
        eax = t63;
        edx = t64;
        goto L_1012b864;
    }
    edx = t64;
    COW_AT(1012b76e)
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t65 = cow_stdcall(g, COW_IMG(0x1015df60u), 1, sp0 - 8u);
    t66 = g->edx;
    t67 = rd32(self + 8u);
    wr32(sp0 - 0x18u, t67);
    g->edx = t66;
    t68 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t67);
    t69 = g->edx;
    if ((uint8_t)t68 == 0u)
    {
        eax = t68;
        edx = t69;
        goto L_1012b864;
    }
    eax = t68;
    COW_AT(1012b793)
    wr32(sp0 - 0x18u, sp0 - 8u);
    g->eax = eax;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t70 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(self + 8u), 1, sp0 - 8u);
    t71 = g->edx;
    if ((uint8_t)t70 == 0u)
    {
        eax = t70;
        edx = t71;
        goto L_1012b864;
    }
    edx = t71;
    COW_AT(1012b7a8)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, sp0 - 8u);
    g->edx = edx;
    t72 = rd32(self + 8u);
    g->esp = sp0 - 0x14u;
    t73 = cow_call_regs(g, COW_IMG(0x10118cb0u), sp0 - 8u, t72, g->edx, 0, 2, sp0 - 8u, 0u);
    t74 = g->ecx;
    t75 = g->edx;
    if ((int16_t)t73 <= 0)
    {
        eax = t73;
        edx = t75;
        goto L_1012b864;
    }
    eax = t73;
    ecx = t74;
    edx = t75;
    edi = t73;
    COW_AT(1012b7c2)
    wr32(sp0 - 0x18u, 0xffffffffu);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0x8bu);
    wr32(sp0 - 0x24u, 0x3eu);
    g->ebx = ebx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t76 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 1u, 0xffffffffu, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t77 = g->ecx;
    t78 = g->edx;
    if ((uint8_t)t76 == 0u)
    {
        eax = t76;
        ecx = t77;
        edx = t78;
    COW_AT(1012b7e3)
        wr32(sp0 - 0x18u, 0xffffffffu);
        wr32(sp0 - 0x1cu, 4u);
        wr32(sp0 - 0x20u, 0x8bu);
        wr32(sp0 - 0x24u, 0x3eu);
        g->ebx = 0x42700000u;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t79 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 4u, 0xffffffffu, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
        t80 = g->ecx;
        t81 = g->edx;
        if ((uint8_t)t79 == 0u)
        {
            eax = t79;
            ecx = t80;
            edx = t81;
        }
        else
        {
            eax = t79;
            ecx = t80;
            edx = t81;
    COW_AT(1012b7fa)
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t82 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
            t83 = g->ecx;
            t84 = g->edx;
            d85 = cow_take_float(g);
            g->edx = t84;
            fpush(g, d85);
            t86 = cow_call_regs(g, COW_IMG(0x10311c6cu), t82, g->ecx, g->edx, 1, 0);
            t87 = g->edx;
            wr32(sp0 + 4u, (uint32_t)(int16_t)t86);
            d88 = fr(g, (double)rdf32(self + 0x60u) - (double)(int32_t)rd32(sp0 + 4u));
            wrf32(self + 0x60u, (float)d88);
            eax = t86;
            ecx = (uint32_t)(int16_t)t86;
            edx = t87;
        }
    }
    else
    {
        eax = t76;
        ecx = t77;
        edx = t78;
    COW_AT(1012b7de)
        wr32(self + 0x60u, 0x42700000u);
    }
    COW_AT(1012b815)
    d89 = (double)rdf32(self + 0x60u);
    if (!(d89 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d89, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1012b86b;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d89, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    COW_AT(1012b825)
    wr32(sp0 - 0x18u, 0xffffffffu);
    wr32(sp0 - 0x1cu, 5u);
    wr32(sp0 - 0x20u, 0x8bu);
    wr32(sp0 - 0x24u, 0x3eu);
    g->ebx = 0x42700000u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t90 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x8bu, 5u, 0xffffffffu, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t91 = g->ecx;
    t92 = g->edx;
    if ((uint8_t)t90 != 0u)
    {
        eax = t90;
        edx = t92;
        goto L_1012b86b;
    }
    ecx = t91;
    COW_AT(1012b83c)
    if (rd32(COW_IMG(0x1036f248u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)edi * 2u + 0x1au) * 0xcu) == 0u)
    {
        eax = rd32(COW_IMG(0x1036f248u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)edi * 2u + 0x1au) * 0xcu);
        edx = (uint32_t)(int16_t)edi;
    }
    else
    {
        eax = rd32(COW_IMG(0x1036f248u) + (uint32_t)(int16_t)rd16(self + (uint32_t)(int16_t)edi * 2u + 0x1au) * 0xcu);
        edx = (uint32_t)(int16_t)edi;
    COW_AT(1012b852)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t93 = cow_thiscall(g, eax, ecx, 0);
        t94 = g->edx;
        wr8(self + 0x52u, 1u);
        eax = t93;
        edx = t94;
    }
    COW_AT(1012b858)
    wr32(self + 0x60u, 0x42700000u);
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_1012b577: ;
    COW_AT(1012b577)
    if ((rd8(ebp + 0x1d0u) & 2u) == 0u) goto L_1012b5a8;
    COW_AT(1012b580)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t19 = cow_thiscall(g, COW_IMG(0x1008e150u), ebp, 0);
    t20 = g->edx;
    if ((uint8_t)t19 != 0u)
    {
        edx = t20;
        goto L_1012b5a8;
    }
    edx = t20;
    COW_AT(1012b58b)
    if (!(rd32(ebp + 0x1d0u) >> 8u & 1u)) goto L_1012b5a4;
    COW_AT(1012b596)
    wr8(COW_IMG(0x10578174u), 0u);
    ecx = 7u;
    edi = 0u;
    goto L_1012b5fd;
L_1012b5a4: ;
    COW_AT(1012b5a4)
    edi = 0u;
    goto L_1012b5ad;
L_1012b5a8: ;
    COW_AT(1012b5a8)
    edi = 1u;
    goto L_1012b5ad;
L_1012b5e0: ;
    COW_AT(1012b5e0)
    wr8(COW_IMG(0x10578174u), 0u);
    eax = 1u;
    ecx = edi * 2u + 1u;
    goto L_1012b5ff;
L_1012b5f2: ;
    COW_AT(1012b5f2)
    wr16(self + 0x50u, 1u);
    ecx = 6u;
    goto L_1012b5fd;
L_1012b624: ;
    COW_AT(1012b624)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 6u);
    loc_1c = 6u;
    goto L_1012b62e;
L_1012b62a: ;
    COW_AT(1012b62a)
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 7u);
    loc_1c = 7u;
    goto L_1012b62e;
L_1012b6bf: ;
    COW_AT(1012b6bf)
    wr8(self + 0x52u, 1u);
    goto L_1012b6c3;
L_1012b864: ;
    COW_AT(1012b864)
    wr32(self + 0x60u, 0x42700000u);
L_1012b86b: ;
    COW_AT(1012b86b)
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012b4b0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012b4c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b4deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 1u;
        wr32(sp0 - 0xcu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1012b4e6u:
    {
        uint32_t eax;
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
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x14u;
        g->edi = 1u;
        wr32(sp0 - 0xcu, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1012b4f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x14u);
        in_esi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x14u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b513u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x14u;
        g->edi = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1012b52bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b536u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b54eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b55fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b56cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b577u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b580u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b58bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b596u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        g->esp = sp0 - 0x18u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5b8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5d6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5f2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b5ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    case 0x1012b611u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b618u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b61bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b61eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b624u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b62au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b62eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x18u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1012b644u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b64eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b655u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b65du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b65fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b690u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b698u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b69eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6a9u:
    {
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6b5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6ebu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b6fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b701u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b710u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b71fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b72du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b73au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b73fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b75cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b76eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b793u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b7a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x18u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012b7c2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1012b7deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b7e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b7fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b815u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b825u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b83cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b852u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b858u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        g->ebx = 0x42700000u;
        (void)sp0;
        return 1;
    }
    case 0x1012b864u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x1012b86bu:
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
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012b4b0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012b4b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
