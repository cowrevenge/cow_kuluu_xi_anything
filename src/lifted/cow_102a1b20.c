/* f_0x102a1b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102a1b20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 344u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a1b39u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x114u); goto E_102a1b39;
    case 0x102a1b40u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x114u); goto E_102a1b40;
    case 0x102a1b54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1b54;
    case 0x102a1b63u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1b63;
    case 0x102a1b70u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x114u); g->esi = rd32(sp0 - 0x114u); goto E_102a1b70;
    case 0x102a1b84u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1b84;
    case 0x102a1b8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1b8b;
    case 0x102a1b9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1b9f;
    case 0x102a1baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1bae;
    case 0x102a1bbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1bbc;
    case 0x102a1bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1bc9;
    case 0x102a1bd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1bd3;
    case 0x102a1bdau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1bda;
    case 0x102a1be9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1be9;
    case 0x102a1bf4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1bf4;
    case 0x102a1bfeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1bfe;
    case 0x102a1c05u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c05;
    case 0x102a1c0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c0f;
    case 0x102a1c16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c16;
    case 0x102a1c20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c20;
    case 0x102a1c27u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c27;
    case 0x102a1c33u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c33;
    case 0x102a1c47u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c47;
    case 0x102a1c51u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c51;
    case 0x102a1c5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c5e;
    case 0x102a1c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c72;
    case 0x102a1c81u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c81;
    case 0x102a1c8eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1c8e;
    case 0x102a1ca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1ca2;
    case 0x102a1cb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1cb1;
    case 0x102a1cbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1cbe;
    case 0x102a1cceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1cce;
    case 0x102a1cdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1cdb;
    case 0x102a1cefu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1cef;
    case 0x102a1cf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1cf9;
    case 0x102a1d06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_102a1d06;
    case 0x102a1d1fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a1d1f;
    case 0x102a1d35u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a1d35;
    case 0x102a1d46u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a1d46;
    case 0x102a1d4du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a1d4d;
    case 0x102a1d54u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_102a1d54;
    default: break;
    }
#endif

    COW_AT(102a1b20)
    wr32(sp0 - 0x114u, in_esi);
    wr32(sp0 - 0x118u, sp0 - 0x10cu);
    wr32(sp0 - 0x108u, 1u);
    g->eax = sp0 - 0x10cu;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1b39u);
    t1 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, self, in_edx, 1, 1, sp0 - 0x10cu);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(102a1b39)
    if ((uint8_t)eax != 0u) goto L_102a1b70;
    COW_AT(102a1b40)
    wr32(sp0 - 0x118u, 0x51du);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1b54u);
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u), 0x51du);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(102a1b54)
    wr32(sp0 - 0x124u, COW_IMG(0x103bd430u));
    wr32(sp0 - 0x128u, COW_IMG(0x103bcb40u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    COW_RET(0x102a1b63u);
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcb40u), COW_IMG(0x103bd430u));
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(102a1b63)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102a1b70: ;
    COW_AT(102a1b70)
    wr32(sp0 - 0x118u, 3u);
    t9 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x11cu, t9);
    t10 = rd32(sp0 + 4u);
    wr32(sp0 - 0x120u, t10);
    g->eax = eax;
    g->ecx = t9;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1b84u);
    t11 = cow_cdecl(g, COW_IMG(0x10279a80u), 3, t10, t9, 3u);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    esi = t10;
    COW_AT(102a1b84)
    if ((uint8_t)eax != 0u) goto L_102a1bc9;
    COW_AT(102a1b8b)
    wr32(sp0 - 0x118u, 0x51du);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1b9fu);
    t14 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u), 0x51du);
    t15 = g->ecx;
    eax = t14;
    ecx = t15;
    COW_AT(102a1b9f)
    t16 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x118u, t16);
    wr32(sp0 - 0x11cu, 3u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = t16;
    g->esp = sp0 - 0x118u;
    COW_RET(0x102a1baeu);
    t17 = cow_cdecl(g, COW_IMG(0x1027a1e0u), 1, 3u);
    t18 = g->ecx;
    t19 = g->edx;
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(102a1bae)
    wr32(sp0 - 0x11cu, eax);
    wr32(sp0 - 0x120u, COW_IMG(0x103bcbe8u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x118u;
    COW_RET(0x102a1bbcu);
    t20 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bcbe8u), eax);
    t21 = g->edx;
    eax = t20;
    edx = t21;
    COW_AT(102a1bbc)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102a1bc9: ;
    COW_AT(102a1bc9)
    wr32(sp0 - 0x118u, sp0 - 0x110u);
    g->eax = sp0 - 0x110u;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1bd3u);
    t22 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x110u);
    t23 = g->ecx;
    t24 = g->edx;
    eax = t22;
    ecx = t23;
    edx = t24;
    COW_AT(102a1bd3)
    if ((uint8_t)eax == 0u) goto L_102a1c27;
L_102a1bda: ;
    COW_AT(102a1bda)
    wr32(sp0 - 0x118u, COW_IMG(0x103bd428u));
    t25 = rd32(sp0 - 0x110u);
    wr32(sp0 - 0x11cu, t25);
    g->eax = eax;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1be9u);
    t26 = cow_call_regs(g, COW_IMG(0x1028a170u), g->eax, t25, edx, 1, 2, t25, COW_IMG(0x103bd428u));
    t27 = g->ecx;
    t28 = g->edx;
    eax = t26;
    ecx = t27;
    edx = t28;
    COW_AT(102a1be9)
    if (eax != 0u) goto L_102a1c8e;
    COW_AT(102a1bf4)
    wr32(sp0 - 0x118u, sp0 - 0x108u);
    g->eax = eax;
    g->edx = sp0 - 0x108u;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1bfeu);
    t29 = cow_thiscall_cdecl(g, COW_IMG(0x102afcb0u), ecx, 1, sp0 - 0x108u);
    t30 = g->ecx;
    t31 = g->edx;
    eax = t29;
    ecx = t30;
    edx = t31;
    COW_AT(102a1bfe)
    if ((uint8_t)eax == 0u) goto L_102a1c5e;
L_102a1c05: ;
    COW_AT(102a1c05)
    wr32(sp0 - 0x118u, sp0 - 0x110u);
    g->eax = sp0 - 0x110u;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1c0fu);
    t32 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, ecx, edx, 1, 1, sp0 - 0x110u);
    t33 = g->ecx;
    t34 = g->edx;
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(102a1c0f)
    if ((uint8_t)eax != 0u) goto L_102a1c05;
    COW_AT(102a1c16)
    wr32(sp0 - 0x118u, sp0 - 0x110u);
    g->eax = eax;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1c20u);
    t35 = cow_call_regs(g, COW_IMG(0x102afbc0u), g->eax, sp0 - 0x110u, edx, 1, 1, sp0 - 0x110u);
    t36 = g->ecx;
    t37 = g->edx;
    eax = t35;
    ecx = t36;
    edx = t37;
    COW_AT(102a1c20)
    if ((uint8_t)eax != 0u) goto L_102a1bda;
L_102a1c27: ;
    COW_AT(102a1c27)
    if (rd32(sp0 - 0x108u) != 0u) goto L_102a1cbe;
    eax = rd32(sp0 - 0x108u);
    COW_AT(102a1c33)
    wr32(sp0 - 0x118u, 0x52bu);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1c47u);
    t48 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u), 0x52bu);
    t49 = g->ecx;
    t50 = g->edx;
    eax = t48;
    ecx = t49;
    edx = t50;
    COW_AT(102a1c47)
    wr32(sp0 - 0x124u, COW_IMG(0x103bd3f4u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    COW_RET(0x102a1c51u);
    t51 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd3f4u), COW_IMG(0x103b379cu));
    t52 = g->edx;
    eax = t51;
    edx = t52;
    COW_AT(102a1c51)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102a1c5e: ;
    COW_AT(102a1c5e)
    wr32(sp0 - 0x118u, 0x520u);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1c72u);
    t38 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u), 0x520u);
    t39 = g->ecx;
    t40 = g->edx;
    eax = t38;
    ecx = t39;
    edx = t40;
    COW_AT(102a1c72)
    wr32(sp0 - 0x124u, COW_IMG(0x103bd3e8u));
    wr32(sp0 - 0x128u, COW_IMG(0x103bca3cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    COW_RET(0x102a1c81u);
    t41 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bca3cu), COW_IMG(0x103bd3e8u));
    t42 = g->edx;
    eax = t41;
    edx = t42;
    COW_AT(102a1c81)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102a1c8e: ;
    COW_AT(102a1c8e)
    wr32(sp0 - 0x118u, 0x525u);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1ca2u);
    t43 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u), 0x525u);
    t44 = g->ecx;
    eax = t43;
    ecx = t44;
    COW_AT(102a1ca2)
    t45 = rd32(sp0 - 0x110u);
    wr32(sp0 - 0x124u, t45);
    wr32(sp0 - 0x128u, COW_IMG(0x103bd3c8u));
    g->eax = eax;
    g->edx = t45;
    g->esp = sp0 - 0x120u;
    COW_RET(0x102a1cb1u);
    t46 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd3c8u), t45);
    t47 = g->edx;
    eax = t46;
    edx = t47;
    COW_AT(102a1cb1)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102a1cbe: ;
    COW_AT(102a1cbe)
    wr32(sp0 - 0x118u, sp0 - 0x104u);
    t53 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x11cu, t53);
    wr32(sp0 - 0x120u, esi);
    g->eax = sp0 - 0x104u;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1cceu);
    t54 = cow_cdecl(g, COW_IMG(0x10279d90u), 3, esi, t53, sp0 - 0x104u);
    t55 = g->edx;
    eax = t54;
    edx = t55;
    COW_AT(102a1cce)
    if (rd32(eax) == 0xa0009u) goto L_102a1d06;
    ecx = rd32(eax);
    COW_AT(102a1cdb)
    wr32(sp0 - 0x118u, 0x530u);
    wr32(sp0 - 0x11cu, COW_IMG(0x103bc974u));
    wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x114u;
    COW_RET(0x102a1cefu);
    t56 = cow_cdecl(g, COW_IMG(0x102858b0u), 3, COW_IMG(0x103b379cu), COW_IMG(0x103bc974u), 0x530u);
    t57 = g->ecx;
    t58 = g->edx;
    eax = t56;
    ecx = t57;
    edx = t58;
    COW_AT(102a1cef)
    wr32(sp0 - 0x124u, COW_IMG(0x103bd39cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x11cu;
    COW_RET(0x102a1cf9u);
    t59 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bd39cu), COW_IMG(0x103b379cu));
    t60 = g->edx;
    eax = t59;
    edx = t60;
    COW_AT(102a1cf9)
    g->esi = rd32(sp0 - 0x114u);
    g->edi = in_edi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_102a1d06: ;
    COW_AT(102a1d06)
    wr32(sp0 - 0x118u, in_edi);
    wr32(sp0 - 0x11cu, 0u);
    t61 = rd32(rd32(esi + 0x50u) + rd32(sp0 - 0x104u) * 4u);
    wr32(sp0 - 0x120u, t61);
    t62 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x124u, t62);
    wr32(sp0 - 0x128u, eax);
    g->eax = eax;
    g->ecx = t62;
    g->esp = sp0 - 0x118u;
    COW_RET(0x102a1d1fu);
    t63 = cow_cdecl(g, COW_IMG(0x1029b3c0u), 4, eax, t62, t61, 0u);
    t64 = g->ecx;
    eax = t63;
    ecx = t64;
    COW_AT(102a1d1f)
    t65 = rd32(sp0 - 0x10cu);
    wr32(sp0 - 0x12cu, t65);
    wr32(sp0 - 0x130u, COW_IMG(0x103b3b4cu));
    wr32(sp0 - 0x134u, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->esp = sp0 - 0x128u;
    COW_RET(0x102a1d35u);
    t66 = cow_cdecl(g, COW_IMG(0x10312031u), 3, sp0 - 0x100u, COW_IMG(0x103b3b4cu), t65);
    edi = eax;
    eax = t66;
    COW_AT(102a1d35)
    t67 = rd32(esi + 0x44u);
    wr32(sp0 - 0x138u, t67);
    wr32(sp0 - 0x13cu, 2u);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    wr32(sp0 - 0x144u, esi);
    g->eax = eax;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x134u;
    COW_RET(0x102a1d46u);
    t68 = cow_thiscall_cdecl(g, COW_IMG(0x102799e0u), t67, 4, esi, sp0 - 0x100u, 2u, t67);
    t69 = g->ecx;
    t70 = g->edx;
    eax = t68;
    ecx = t69;
    edx = t70;
    COW_AT(102a1d46)
    wr32(sp0 - 0x148u, edi);
    wr32(sp0 - 0x14cu, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x144u;
    COW_RET(0x102a1d4du);
    t71 = cow_thiscall_cdecl(g, COW_IMG(0x10279550u), ecx, 2, esi, edi);
    t72 = g->ecx;
    t73 = g->edx;
    eax = t71;
    ecx = t72;
    edx = t73;
    COW_AT(102a1d4d)
    wr32(sp0 - 0x150u, edi);
    wr32(sp0 - 0x154u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x14cu;
    COW_RET(0x102a1d54u);
    cow_thiscall_cdecl(g, COW_IMG(0x1027a240u), ecx, 2, esi, edi);
    t74 = g->edx;
    edx = t74;
    COW_AT(102a1d54)
    t75 = (rd32(rd32(esi + 0x54u) + rd32(sp0 - 0x104u) * 4u) & 0xffff00ffu) | (uint32_t)(uint8_t)(rd32(rd32(esi + 0x54u) + rd32(sp0 - 0x104u) * 4u) >> 8u | 0x40u) << 8u;
    t76 = rd32(esi + 0x54u);
    t77 = rd32(sp0 - 0x104u);
    t78 = rd32(sp0 - 0x114u);
    t79 = rd32(sp0 - 0x118u);
    wr32(t76 + t77 * 4u, t75);
    g->esi = t78;
    g->edi = t79;
    g->edx = edx;
    return (t76 + t77 * 4u & 0xffffff00u) | (uint8_t)(t76 + t77 * 4u | 0xffu);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a1b20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a1b39u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x118u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x102a1b40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x102a1b54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x102a1b63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x128u;
        (void)sp0;
        return 1;
    }
    case 0x102a1b70u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x10cu);
        (void)sp0;
        return 1;
    }
    case 0x102a1b84u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x102a1b8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x102a1b9fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x102a1baeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x102a1bbcu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x102a1bc9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x102a1bd3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1bdau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1be9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x11cu;
        (void)sp0;
        return 1;
    }
    case 0x102a1bf4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x102a1bfeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x102a1c05u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x102a1c0fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1c16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1c20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x118u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1c27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1c33u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1c47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x102a1c51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x102a1c5eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x108u);
        (void)sp0;
        return 1;
    }
    case 0x102a1c72u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x102a1c81u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x128u;
        (void)sp0;
        return 1;
    }
    case 0x102a1c8eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        (void)sp0;
        return 1;
    }
    case 0x102a1ca2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        (void)sp0;
        return 1;
    }
    case 0x102a1cb1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x128u;
        (void)sp0;
        return 1;
    }
    case 0x102a1cbeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x110u);
        (void)sp0;
        return 1;
    }
    case 0x102a1cceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x118u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x102a1cdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x102a1cefu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x120u, COW_IMG(0x103b379cu));
        (void)sp0;
        return 1;
    }
    case 0x102a1cf9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x124u;
        (void)sp0;
        return 1;
    }
    case 0x102a1d06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x114u;
        wr32(sp0 - 0x118u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x102a1d1fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x128u;
        (void)sp0;
        return 1;
    }
    case 0x102a1d35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x134u;
        wr32(sp0 - 0x134u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102a1d46u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x144u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102a1d4du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x14cu;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    case 0x102a1d54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x154u;
        wr32(sp0 - 0x140u, sp0 - 0x100u);
        wr32(sp0 - 0x134u, sp0 - 0x100u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a1b20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a1b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
