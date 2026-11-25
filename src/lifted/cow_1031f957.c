/* f_0x1031f957 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=6 */
void cow_fn_1031f957(Guest* g)
{
    double d34;
    double d39;
    double d56;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031f97cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f97c;
    case 0x1031f989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f989;
    case 0x1031f98eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f98e;
    case 0x1031f99cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f99c;
    case 0x1031f9a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f9a0;
    case 0x1031f9aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f9ae;
    case 0x1031f9b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f9b3;
    case 0x1031f9c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f9c1;
    case 0x1031f9c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f9c6;
    case 0x1031f9d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f9d4;
    case 0x1031fa52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa52;
    case 0x1031fa56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa56;
    case 0x1031fa5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa5d;
    case 0x1031fa61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa61;
    case 0x1031fa68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa68;
    case 0x1031fa6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa6c;
    case 0x1031fa73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa73;
    case 0x1031fa77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa77;
    case 0x1031fa7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa7d;
    case 0x1031fa81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa81;
    case 0x1031fa87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa87;
    case 0x1031fa92u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa92;
    case 0x1031fa99u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fa99;
    case 0x1031faa0u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031faa0;
    case 0x1031faa4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031faa4;
    case 0x1031faacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031faac;
    case 0x1031fab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fab8;
    case 0x1031fac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fac2;
    case 0x1031fac6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fac6;
    case 0x1031faccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031facc;
    case 0x1031fad7u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fad7;
    case 0x1031fadeu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fade;
    case 0x1031fae2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fae2;
    case 0x1031faeau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031faea;
    case 0x1031faf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031faf7;
    case 0x1031fb02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fb02;
    case 0x1031fb04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; goto E_1031fb04;
    case 0x1031fb62u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb62;
    case 0x1031fb72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb72;
    case 0x1031fb7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb7b;
    case 0x1031fb7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb7e;
    case 0x1031fb84u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb84;
    case 0x1031fb87u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb87;
    case 0x1031fb8du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb8d;
    case 0x1031fb90u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb90;
    case 0x1031fb96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb96;
    case 0x1031fb99u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb99;
    case 0x1031fb9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fb9e;
    case 0x1031fba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fba1;
    case 0x1031fbb0u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbb0;
    case 0x1031fbb3u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbb3;
    case 0x1031fbb6u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbb6;
    case 0x1031fbb9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbb9;
    case 0x1031fbbfu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbbf;
    case 0x1031fbc9u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbc9;
    case 0x1031fbd1u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbd1;
    case 0x1031fbd5u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbd5;
    case 0x1031fbd7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbd7;
    case 0x1031fbe4u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbe4;
    case 0x1031fbe7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbe7;
    case 0x1031fbeau: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbea;
    case 0x1031fbeeu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbee;
    case 0x1031fbf7u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbf7;
    case 0x1031fbfeu: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fbfe;
    case 0x1031fc00u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031fc00;
    default: break;
    }
#endif

    COW_AT(1031f957)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(rd32(sp0 + 4u) + 4u, 0u);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(rd32(sp0 + 4u) + 8u, 0u);
    t1 = rd32(sp0 + 4u);
    t2 = rd32(sp0 - 0x14u);
    wr32(t1 + 0xcu, 0u);
    if ((rd8(sp0 + 0xcu) & 0x10u) == 0u)
    {
        ecx = (t1 & 0xffffff00u) | rd8(sp0 + 0xcu);
        ebx = t2;
    }
    else
    {
        ecx = (t1 & 0xffffff00u) | rd8(sp0 + 0xcu);
        ebx = t2;
    COW_AT(1031f97c)
        t3 = rd32(sp0 + 4u);
        wr32(sp0 + 0xcu, 0xc000008fu);
        t4 = rd32(t3 + 4u);
        wr32(t3 + 4u, t4 | ebx);
    }
    COW_AT(1031f989)
    if ((ecx & 2u) != 0u)
    {
    COW_AT(1031f98e)
        t5 = rd32(sp0 + 4u);
        wr32(sp0 + 0xcu, 0xc0000093u);
        t6 = rd32(t5 + 4u);
        wr32(t5 + 4u, t6 | 2u);
    }
    COW_AT(1031f99c)
    if (((uint8_t)ebx & (uint8_t)ecx) != 0u)
    {
    COW_AT(1031f9a0)
        t7 = rd32(sp0 + 4u);
        wr32(sp0 + 0xcu, 0xc0000091u);
        t8 = rd32(t7 + 4u);
        wr32(t7 + 4u, t8 | 4u);
    }
    COW_AT(1031f9ae)
    if ((ecx & 4u) != 0u)
    {
    COW_AT(1031f9b3)
        t9 = rd32(sp0 + 4u);
        wr32(sp0 + 0xcu, 0xc000008eu);
        t10 = rd32(t9 + 4u);
        wr32(t9 + 4u, t10 | 8u);
    }
    COW_AT(1031f9c1)
    if ((ecx & 8u) != 0u)
    {
    COW_AT(1031f9c6)
        t11 = rd32(sp0 + 4u);
        wr32(sp0 + 0xcu, 0xc0000090u);
        t12 = rd32(t11 + 4u);
        wr32(t11 + 4u, t12 | 0x10u);
    }
    COW_AT(1031f9d4)
    wr32(sp0 - 0x14u, 2u);
    t13 = (~rd32(rd32(sp0 + 8u)) & ebx) << 4u | (rd32(rd32(sp0 + 4u) + 8u) & 0xffffffefu);
    t14 = rd32(sp0 + 8u);
    wr32(rd32(sp0 + 4u) + 8u, t13);
    t15 = (~rd32(t14) & 4u) << 1u | (rd32(rd32(sp0 + 4u) + 8u) & 0xfffffff7u);
    wr32(rd32(sp0 + 4u) + 8u, t15);
    t16 = (~rd32(t14) >> 1u & 4u) | (rd32(rd32(sp0 + 4u) + 8u) & 0xfffffffbu);
    wr32(rd32(sp0 + 4u) + 8u, t16);
    t17 = (~rd32(t14) >> 3u & 2u) | (rd32(rd32(sp0 + 4u) + 8u) & 0xfffffffdu);
    wr32(rd32(sp0 + 4u) + 8u, t17);
    t18 = (~rd32(t14) >> 5u & ebx) | (rd32(rd32(sp0 + 4u) + 8u) & 0xfffffffeu);
    t19 = rd32(sp0 + 4u);
    t20 = rd32(rd32(sp0 + 4u) + 8u);
    wr32(t19 + 8u, t18);
    g->eax = t19;
    g->esp = sp0 - 0x10u;
    t21 = cow_thiscall(g, COW_IMG(0x1031ff23u), t18, 0);
    eax = t21;
    esi = t14;
    COW_AT(1031fa52)
    if (((uint8_t)ebx & (uint8_t)eax) != 0u)
    {
    COW_AT(1031fa56)
        t22 = rd32(rd32(sp0 + 4u) + 0xcu);
        wr32(rd32(sp0 + 4u) + 0xcu, t22 | 0x10u);
    }
    COW_AT(1031fa5d)
    if ((eax & 4u) != 0u)
    {
    COW_AT(1031fa61)
        t23 = rd32(rd32(sp0 + 4u) + 0xcu);
        wr32(rd32(sp0 + 4u) + 0xcu, t23 | 8u);
    }
    COW_AT(1031fa68)
    if ((eax & 8u) != 0u)
    {
    COW_AT(1031fa6c)
        t24 = rd32(rd32(sp0 + 4u) + 0xcu);
        wr32(rd32(sp0 + 4u) + 0xcu, t24 | 4u);
    }
    COW_AT(1031fa73)
    if ((eax & 0x10u) != 0u)
    {
    COW_AT(1031fa77)
        t25 = rd32(rd32(sp0 + 4u) + 0xcu);
        wr32(rd32(sp0 + 4u) + 0xcu, t25 | 2u);
    }
    COW_AT(1031fa7d)
    if ((eax & 0x20u) != 0u)
    {
    COW_AT(1031fa81)
        t26 = rd32(rd32(sp0 + 4u) + 0xcu);
        wr32(rd32(sp0 + 4u) + 0xcu, t26 | ebx);
    }
    COW_AT(1031fa87)
    if ((rd32(esi) & 0xc00u) == 0u)
    {
    COW_AT(1031fac6)
        t28 = rd32(rd32(sp0 + 4u));
        wr32(rd32(sp0 + 4u), t28 & 0xfffffffcu);
    }
    else
    {
        eax = rd32(esi) & 0xc00u;
    COW_AT(1031fa92)
        if (eax == 0x400u) goto L_1031fab8;
    COW_AT(1031fa99)
        if (eax == 0x800u) goto L_1031faac;
    COW_AT(1031faa0)
        if (eax == 0xc00u)
        {
    COW_AT(1031faa4)
            t27 = rd32(rd32(sp0 + 4u));
            wr32(rd32(sp0 + 4u), t27 | 3u);
        }
    }
L_1031facc: ;
    COW_AT(1031facc)
    if ((rd32(esi) & 0x300u) == 0u) goto L_1031faf7;
    eax = rd32(esi) & 0x300u;
    COW_AT(1031fad7)
    if (eax == 0x200u) goto L_1031faea;
    COW_AT(1031fade)
    if (eax == 0x300u)
    {
    COW_AT(1031fae2)
        t29 = rd32(rd32(sp0 + 4u));
        wr32(rd32(sp0 + 4u), t29 & 0xffffffe3u);
    }
L_1031fb04: ;
    COW_AT(1031fb04)
    t30 = (rd32(sp0 + 0x10u) & 0xfffu) << 5u | (rd32(rd32(sp0 + 4u)) & 0xfffe001fu);
    t31 = rd32(rd32(sp0 + 4u));
    wr32(rd32(sp0 + 4u), t30);
    t32 = rd32(rd32(sp0 + 4u) + 0x20u);
    wr32(rd32(sp0 + 4u) + 0x20u, t32 | ebx);
    t33 = (rd32(rd32(sp0 + 4u) + 0x20u) & 0xffffffe3u) | 2u;
    wr32(rd32(sp0 + 4u) + 0x20u, t33);
    d34 = rdf64(rd32(sp0 + 0x14u));
    wrf64(rd32(sp0 + 4u) + 0x10u, d34);
    t35 = rd32(rd32(sp0 + 4u) + 0x50u);
    wr32(rd32(sp0 + 4u) + 0x50u, t35 | ebx);
    t36 = (rd32(rd32(sp0 + 4u) + 0x50u) & 0xffffffe3u) | 2u;
    t37 = rd32(sp0 + 0x18u);
    wr32(rd32(sp0 + 4u) + 0x50u, t36);
    t38 = rd32(sp0 + 4u);
    d39 = rdf64(t37);
    wrf64(t38 + 0x40u, d39);
    g->edx = t31 & 0xfffe001fu;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1031ff31u), t36, 0);
    t40 = g->ecx;
    t41 = g->edx;
    ecx = t40;
    edx = t41;
    edi = t37;
    COW_AT(1031fb62)
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x1cu, 0u);
    t42 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x20u, t42);
    g->esp = sp0 - 0x10u;
    cow_stdcall(g, rd32(COW_IMG(0x103290ecu)), 4, t42, 0u, ebx, sp0 + 4u);   /* kernel32.dll!RaiseException */
    COW_AT(1031fb72)
    t43 = rd8(rd32(sp0 + 4u) + 8u);
    if ((t43 & 0x10u) == 0u)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
    COW_AT(1031fb7b)
        t44 = rd32(esi);
        wr32(esi, t44 & 0xfffffffeu);
    }
    COW_AT(1031fb7e)
    t45 = rd8(eax + 8u);
    if ((t45 & 8u) != 0u)
    {
    COW_AT(1031fb84)
        t46 = rd32(esi);
        wr32(esi, t46 & 0xfffffffbu);
    }
    COW_AT(1031fb87)
    t47 = rd8(eax + 8u);
    if ((t47 & 4u) != 0u)
    {
    COW_AT(1031fb8d)
        t48 = rd32(esi);
        wr32(esi, t48 & 0xfffffff7u);
    }
    COW_AT(1031fb90)
    t49 = rd8(eax + 8u);
    if ((t49 & 2u) != 0u)
    {
    COW_AT(1031fb96)
        t50 = rd32(esi);
        wr32(esi, t50 & 0xffffffefu);
    }
    COW_AT(1031fb99)
    t51 = rd8(eax + 8u);
    if ((t51 & (uint8_t)ebx) != 0u)
    {
    COW_AT(1031fb9e)
        t52 = rd32(esi);
        wr32(esi, t52 & 0xffffffdfu);
    }
    COW_AT(1031fba1)
    if ((rd32(eax) & 3u) == 0u)
    {
    COW_AT(1031fbd5)
        t54 = rd32(esi);
        wr32(esi, t54 & 0xfffff3ffu);
    }
    else
    {
        ecx = rd32(eax) & 3u;
    COW_AT(1031fbb0)
        if (ecx == 1u) goto L_1031fbc9;
        ecx = ecx - 1u;
    COW_AT(1031fbb3)
        if (ecx == 1u) goto L_1031fbbf;
        ecx = ecx - 1u;
    COW_AT(1031fbb6)
        if (ecx == 1u)
        {
    COW_AT(1031fbb9)
            t53 = rd8(esi + 1u);
            wr8(esi + 1u, (uint8_t)(t53 | 0xcu));
        }
    }
L_1031fbd7: ;
    COW_AT(1031fbd7)
    if ((rd32(eax) >> 2u & 7u) == 0u) goto L_1031fbf7;
    ecx = rd32(eax) >> 2u & 7u;
    COW_AT(1031fbe4)
    if (ecx == 1u) goto L_1031fbee;
    ecx = ecx - 1u;
    COW_AT(1031fbe7)
    if (ecx == 1u)
    {
    COW_AT(1031fbea)
        t55 = rd32(esi);
        wr32(esi, t55 & 0xfffff3ffu);
    }
L_1031fc00: ;
    COW_AT(1031fc00)
    d56 = rdf64(eax + 0x40u);
    wrf64(edi, d56);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = 0xfffff3ffu;
    return;
L_1031faac: ;
    COW_AT(1031faac)
    eax = rd32(sp0 + 4u);
    ecx = (rd32(rd32(sp0 + 4u)) & 0xfffffffeu) | 2u;
L_1031fac2: ;
    COW_AT(1031fac2)
    wr32(eax, ecx);
    goto L_1031facc;
L_1031fab8: ;
    COW_AT(1031fab8)
    eax = rd32(sp0 + 4u);
    ecx = (rd32(rd32(sp0 + 4u)) & 0xfffffffdu) | ebx;
    goto L_1031fac2;
L_1031faea: ;
    COW_AT(1031faea)
    eax = rd32(sp0 + 4u);
    ecx = (rd32(rd32(sp0 + 4u)) & 0xffffffe7u) | 4u;
L_1031fb02: ;
    COW_AT(1031fb02)
    wr32(eax, ecx);
    goto L_1031fb04;
L_1031faf7: ;
    COW_AT(1031faf7)
    eax = rd32(sp0 + 4u);
    ecx = (rd32(rd32(sp0 + 4u)) & 0xffffffebu) | 8u;
    goto L_1031fb02;
L_1031fbbf: ;
    COW_AT(1031fbbf)
    ecx = (rd32(esi) & 0xffff00ffu) | ((rd32(esi) >> 8u & 0xfbu) << 8u >> 8u | 8u) << 8u;
L_1031fbd1: ;
    COW_AT(1031fbd1)
    wr32(esi, ecx);
    goto L_1031fbd7;
L_1031fbc9: ;
    COW_AT(1031fbc9)
    ecx = (rd32(esi) & 0xffff00ffu) | ((rd32(esi) >> 8u & 0xf7u) << 8u >> 8u | 4u) << 8u;
    goto L_1031fbd1;
L_1031fbee: ;
    COW_AT(1031fbee)
    ecx = (rd32(esi) & 0xffff00ffu) | (uint32_t)(uint8_t)((rd32(esi) & 0xfffff3ffu) >> 8u | 2u) << 8u;
L_1031fbfe: ;
    COW_AT(1031fbfe)
    wr32(esi, ecx);
    goto L_1031fc00;
L_1031fbf7: ;
    COW_AT(1031fbf7)
    ecx = (rd32(esi) & 0xffff00ffu) | (uint32_t)(uint8_t)((rd32(esi) & 0xfffff3ffu) >> 8u | 3u) << 8u;
    goto L_1031fbfe;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031f957(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031f97cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f989u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f98eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f99cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9a0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9aeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9b3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9d4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa52u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa56u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa5du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa61u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa68u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa73u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa7du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa81u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa92u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xc00u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa99u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xc00u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faa0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xc00u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faa4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faacu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fab8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fac2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fac6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fad7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0x300u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fadeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ecx = 0x300u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fae2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faeau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb04u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb62u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb7bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb7eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb84u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb87u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb8du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb90u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb96u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb99u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fba1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbb3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbb6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbb9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbbfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbc9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbd1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbd5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbd7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbe4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbe7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbeau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbeeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbf7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fbfeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fc00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x10u;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f957(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031f957(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
