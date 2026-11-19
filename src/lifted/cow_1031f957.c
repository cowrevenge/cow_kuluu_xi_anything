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
    double d11;
    double d13;
    double d17;
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg6 = rd32(sp0 + 0x18u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 36u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031f97cu: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f97c;
    case 0x1031f989u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f989;
    case 0x1031f98eu: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f98e;
    case 0x1031f99cu: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f99c;
    case 0x1031f9a0u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f9a0;
    case 0x1031f9aeu: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f9ae;
    case 0x1031f9b3u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f9b3;
    case 0x1031f9c1u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f9c1;
    case 0x1031f9c6u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f9c6;
    case 0x1031f9d4u: eax = g->eax; ecx = g->ecx; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1031f9d4;
    case 0x1031fa56u: eax = g->eax; ecx = g->ecx; goto E_1031fa56;
    case 0x1031fa5du: eax = g->eax; ecx = g->ecx; goto E_1031fa5d;
    case 0x1031fa61u: eax = g->eax; ecx = g->ecx; goto E_1031fa61;
    case 0x1031fa68u: eax = g->eax; ecx = g->ecx; goto E_1031fa68;
    case 0x1031fa6cu: eax = g->eax; ecx = g->ecx; goto E_1031fa6c;
    case 0x1031fa73u: eax = g->eax; ecx = g->ecx; goto E_1031fa73;
    case 0x1031fa77u: eax = g->eax; ecx = g->ecx; goto E_1031fa77;
    case 0x1031fa7du: eax = g->eax; ecx = g->ecx; goto E_1031fa7d;
    case 0x1031fa81u: eax = g->eax; ecx = g->ecx; goto E_1031fa81;
    case 0x1031fa87u: eax = g->eax; ecx = g->ecx; goto E_1031fa87;
    case 0x1031fa92u: eax = g->eax; goto E_1031fa92;
    case 0x1031fa99u: eax = g->eax; goto E_1031fa99;
    case 0x1031faa0u: eax = g->eax; goto E_1031faa0;
    case 0x1031faa4u: eax = g->eax; ecx = g->ecx; goto E_1031faa4;
    case 0x1031faacu: eax = g->eax; ecx = g->ecx; goto E_1031faac;
    case 0x1031fab8u: eax = g->eax; ecx = g->ecx; goto E_1031fab8;
    case 0x1031fac2u: ecx = g->ecx; goto E_1031fac2;
    case 0x1031fac6u: eax = g->eax; ecx = g->ecx; goto E_1031fac6;
    case 0x1031faccu: eax = g->eax; ecx = g->ecx; goto E_1031facc;
    case 0x1031fad7u: eax = g->eax; goto E_1031fad7;
    case 0x1031fadeu: eax = g->eax; goto E_1031fade;
    case 0x1031fae2u: eax = g->eax; ecx = g->ecx; goto E_1031fae2;
    case 0x1031faeau: eax = g->eax; ecx = g->ecx; goto E_1031faea;
    case 0x1031faf7u: eax = g->eax; ecx = g->ecx; goto E_1031faf7;
    case 0x1031fb02u: ecx = g->ecx; goto E_1031fb02;
    case 0x1031fb04u: eax = g->eax; ecx = g->ecx; goto E_1031fb04;
    case 0x1031fb7bu: ecx = g->ecx; goto E_1031fb7b;
    case 0x1031fb7eu: ecx = g->ecx; goto E_1031fb7e;
    case 0x1031fb84u: ecx = g->ecx; goto E_1031fb84;
    case 0x1031fb87u: ecx = g->ecx; goto E_1031fb87;
    case 0x1031fb8du: ecx = g->ecx; goto E_1031fb8d;
    case 0x1031fb90u: ecx = g->ecx; goto E_1031fb90;
    case 0x1031fb96u: ecx = g->ecx; goto E_1031fb96;
    case 0x1031fb99u: ecx = g->ecx; goto E_1031fb99;
    case 0x1031fb9eu: ecx = g->ecx; goto E_1031fb9e;
    case 0x1031fba1u: ecx = g->ecx; goto E_1031fba1;
    case 0x1031fbb0u: ecx = g->ecx; goto E_1031fbb0;
    case 0x1031fbb3u: ecx = g->ecx; goto E_1031fbb3;
    case 0x1031fbb6u: ecx = g->ecx; goto E_1031fbb6;
    case 0x1031fbb9u: ecx = g->ecx; goto E_1031fbb9;
    case 0x1031fbbfu: ecx = g->ecx; goto E_1031fbbf;
    case 0x1031fbc9u: ecx = g->ecx; goto E_1031fbc9;
    case 0x1031fbd1u: ecx = g->ecx; goto E_1031fbd1;
    case 0x1031fbd5u: ecx = g->ecx; goto E_1031fbd5;
    case 0x1031fbd7u: ecx = g->ecx; goto E_1031fbd7;
    case 0x1031fbe4u: ecx = g->ecx; goto E_1031fbe4;
    case 0x1031fbe7u: ecx = g->ecx; goto E_1031fbe7;
    case 0x1031fbeau: ecx = g->ecx; goto E_1031fbea;
    case 0x1031fbeeu: ecx = g->ecx; goto E_1031fbee;
    case 0x1031fbf7u: ecx = g->ecx; goto E_1031fbf7;
    case 0x1031fbfeu: ecx = g->ecx; goto E_1031fbfe;
    case 0x1031fc00u: ecx = g->ecx; goto E_1031fc00;
    default: break;
    }
#endif

    COW_AT(1031f957)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(arg1 + 4u, 0u);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 1u);
    wr32(arg1 + 8u, 0u);
    wr32(arg1 + 0xcu, 0u);
    if ((rd8(sp0 + 0xcu) & 0x10u) == 0u)
    {
        ecx = (arg1 & 0xffffff00u) | rd8(sp0 + 0xcu);
    }
    else
    {
        ecx = (arg1 & 0xffffff00u) | rd8(sp0 + 0xcu);
    COW_AT(1031f97c)
        wr32(sp0 + 0xcu, 0xc000008fu);
        wr32(arg1 + 4u, rd32(arg1 + 4u) | 1u);
    }
    COW_AT(1031f989)
    if ((ecx & 2u) != 0u)
    {
    COW_AT(1031f98e)
        wr32(sp0 + 0xcu, 0xc0000093u);
        wr32(arg1 + 4u, rd32(arg1 + 4u) | 2u);
    }
    COW_AT(1031f99c)
    if (ecx & 1u)
    {
    COW_AT(1031f9a0)
        wr32(sp0 + 0xcu, 0xc0000091u);
        wr32(arg1 + 4u, rd32(arg1 + 4u) | 4u);
    }
    COW_AT(1031f9ae)
    if ((ecx & 4u) != 0u)
    {
    COW_AT(1031f9b3)
        wr32(sp0 + 0xcu, 0xc000008eu);
        wr32(arg1 + 4u, rd32(arg1 + 4u) | 8u);
    }
    COW_AT(1031f9c1)
    if ((ecx & 8u) != 0u)
    {
    COW_AT(1031f9c6)
        wr32(sp0 + 0xcu, 0xc0000090u);
        wr32(arg1 + 4u, rd32(arg1 + 4u) | 0x10u);
    }
    COW_AT(1031f9d4)
    wr32(sp0 - 0x14u, 2u);
    t1 = (~rd32(arg2) & 1u) << 4u | (rd32(arg1 + 8u) & 0xffffffefu);
    wr32(arg1 + 8u, t1);
    t2 = (~rd32(arg2) & 4u) << 1u | (rd32(arg1 + 8u) & 0xfffffff7u);
    wr32(arg1 + 8u, t2);
    t3 = (~rd32(arg2) >> 1u & 4u) | (rd32(arg1 + 8u) & 0xfffffffbu);
    wr32(arg1 + 8u, t3);
    t4 = (~rd32(arg2) >> 3u & 2u) | (rd32(arg1 + 8u) & 0xfffffffdu);
    wr32(arg1 + 8u, t4);
    t5 = (~rd32(arg2) >> 5u & 1u) | (rd32(arg1 + 8u) & 0xfffffffeu);
    t6 = rd32(arg1 + 8u);
    wr32(arg1 + 8u, t5);
    g->eax = arg1;
    g->esp = sp0 - 0x10u;
    t7 = cow_thiscall(g, COW_IMG(0x1031ff23u), t5, 0);
    if (!(t7 & 1u))
    {
        eax = t7;
    }
    else
    {
        eax = t7;
    COW_AT(1031fa56)
        wr32(arg1 + 0xcu, rd32(arg1 + 0xcu) | 0x10u);
    }
    COW_AT(1031fa5d)
    if ((eax & 4u) != 0u)
    {
    COW_AT(1031fa61)
        wr32(arg1 + 0xcu, rd32(arg1 + 0xcu) | 8u);
    }
    COW_AT(1031fa68)
    if ((eax & 8u) != 0u)
    {
    COW_AT(1031fa6c)
        wr32(arg1 + 0xcu, rd32(arg1 + 0xcu) | 4u);
    }
    COW_AT(1031fa73)
    if ((eax & 0x10u) != 0u)
    {
    COW_AT(1031fa77)
        wr32(arg1 + 0xcu, rd32(arg1 + 0xcu) | 2u);
    }
    COW_AT(1031fa7d)
    if ((eax & 0x20u) != 0u)
    {
    COW_AT(1031fa81)
        wr32(arg1 + 0xcu, rd32(arg1 + 0xcu) | 1u);
    }
    COW_AT(1031fa87)
    if ((rd32(arg2) & 0xc00u) == 0u)
    {
    COW_AT(1031fac6)
        wr32(arg1, rd32(arg1) & 0xfffffffcu);
    }
    else
    {
        eax = rd32(arg2) & 0xc00u;
    COW_AT(1031fa92)
        if (eax == 0x400u) goto L_1031fab8;
    COW_AT(1031fa99)
        if (eax == 0x800u) goto L_1031faac;
    COW_AT(1031faa0)
        if (eax == 0xc00u)
        {
    COW_AT(1031faa4)
            wr32(arg1, rd32(arg1) | 3u);
        }
    }
L_1031facc: ;
    COW_AT(1031facc)
    if ((rd32(arg2) & 0x300u) == 0u) goto L_1031faf7;
    eax = rd32(arg2) & 0x300u;
    COW_AT(1031fad7)
    if (eax == 0x200u) goto L_1031faea;
    COW_AT(1031fade)
    if (eax == 0x300u)
    {
    COW_AT(1031fae2)
        wr32(arg1, rd32(arg1) & 0xffffffe3u);
    }
L_1031fb04: ;
    COW_AT(1031fb04)
    t8 = (arg4 & 0xfffu) << 5u | (rd32(arg1) & 0xfffe001fu);
    t9 = rd32(arg1);
    wr32(arg1, t8);
    wr32(arg1 + 0x20u, rd32(arg1 + 0x20u) | 1u);
    t10 = (rd32(arg1 + 0x20u) & 0xffffffe3u) | 2u;
    wr32(arg1 + 0x20u, t10);
    d11 = rdf64(arg5);
    wrf64(arg1 + 0x10u, d11);
    wr32(arg1 + 0x50u, rd32(arg1 + 0x50u) | 1u);
    t12 = (rd32(arg1 + 0x50u) & 0xffffffe3u) | 2u;
    wr32(arg1 + 0x50u, t12);
    d13 = rdf64(arg6);
    wrf64(arg1 + 0x40u, d13);
    g->edx = t9 & 0xfffe001fu;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1031ff31u), t12, 0);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x14u, sp0 + 4u);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0u);
    t16 = rd32(sp0 + 0xcu);
    wr32(sp0 - 0x20u, t16);
    cow_stdcall(g, rd32(COW_IMG(0x103290ecu)), 4, t16, 0u, 1u, sp0 + 4u);   /* kernel32.dll!RaiseException */
    if ((rd8(arg1 + 8u) & 0x10u) != 0u)
    {
    COW_AT(1031fb7b)
        wr32(arg2, rd32(arg2) & 0xfffffffeu);
    }
    COW_AT(1031fb7e)
    if ((rd8(arg1 + 8u) & 8u) != 0u)
    {
    COW_AT(1031fb84)
        wr32(arg2, rd32(arg2) & 0xfffffffbu);
    }
    COW_AT(1031fb87)
    if ((rd8(arg1 + 8u) & 4u) != 0u)
    {
    COW_AT(1031fb8d)
        wr32(arg2, rd32(arg2) & 0xfffffff7u);
    }
    COW_AT(1031fb90)
    if ((rd8(arg1 + 8u) & 2u) != 0u)
    {
    COW_AT(1031fb96)
        wr32(arg2, rd32(arg2) & 0xffffffefu);
    }
    COW_AT(1031fb99)
    if (rd8(arg1 + 8u) & 1u)
    {
    COW_AT(1031fb9e)
        wr32(arg2, rd32(arg2) & 0xffffffdfu);
    }
    COW_AT(1031fba1)
    if ((rd32(arg1) & 3u) == 0u)
    {
    COW_AT(1031fbd5)
        wr32(arg2, rd32(arg2) & 0xfffff3ffu);
    }
    else
    {
        ecx = rd32(arg1) & 3u;
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
            wr8(arg2 + 1u, rd8(arg2 + 1u) | 0xcu);
        }
    }
L_1031fbd7: ;
    COW_AT(1031fbd7)
    if ((rd32(arg1) >> 2u & 7u) == 0u) goto L_1031fbf7;
    ecx = rd32(arg1) >> 2u & 7u;
    COW_AT(1031fbe4)
    if (ecx == 1u) goto L_1031fbee;
    ecx = ecx - 1u;
    COW_AT(1031fbe7)
    if (ecx == 1u)
    {
    COW_AT(1031fbea)
        wr32(arg2, rd32(arg2) & 0xfffff3ffu);
    }
L_1031fc00: ;
    COW_AT(1031fc00)
    d17 = rdf64(arg1 + 0x40u);
    wrf64(arg6, d17);
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = 0xfffff3ffu;
    return;
L_1031faac: ;
    COW_AT(1031faac)
    ecx = (rd32(arg1) & 0xfffffffeu) | 2u;
L_1031fac2: ;
    COW_AT(1031fac2)
    wr32(arg1, ecx);
    goto L_1031facc;
L_1031fab8: ;
    COW_AT(1031fab8)
    ecx = (rd32(arg1) & 0xfffffffdu) | 1u;
    goto L_1031fac2;
L_1031faea: ;
    COW_AT(1031faea)
    ecx = (rd32(arg1) & 0xffffffe7u) | 4u;
L_1031fb02: ;
    COW_AT(1031fb02)
    wr32(arg1, ecx);
    goto L_1031fb04;
L_1031faf7: ;
    COW_AT(1031faf7)
    ecx = (rd32(arg1) & 0xffffffebu) | 8u;
    goto L_1031fb02;
L_1031fbbf: ;
    COW_AT(1031fbbf)
    ecx = (rd32(arg2) & 0xffff00ffu) | ((rd32(arg2) >> 8u & 0xfbu) << 8u >> 8u | 8u) << 8u;
L_1031fbd1: ;
    COW_AT(1031fbd1)
    wr32(arg2, ecx);
    goto L_1031fbd7;
L_1031fbc9: ;
    COW_AT(1031fbc9)
    ecx = (rd32(arg2) & 0xffff00ffu) | ((rd32(arg2) >> 8u & 0xf7u) << 8u >> 8u | 4u) << 8u;
    goto L_1031fbd1;
L_1031fbee: ;
    COW_AT(1031fbee)
    ecx = (rd32(arg2) & 0xffff00ffu) | (uint32_t)(uint8_t)((rd32(arg2) & 0xfffff3ffu) >> 8u | 2u) << 8u;
L_1031fbfe: ;
    COW_AT(1031fbfe)
    wr32(arg2, ecx);
    goto L_1031fc00;
L_1031fbf7: ;
    COW_AT(1031fbf7)
    ecx = (rd32(arg2) & 0xffff00ffu) | (uint32_t)(uint8_t)((rd32(arg2) & 0xfffff3ffu) >> 8u | 3u) << 8u;
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
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f989u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f98eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f99cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9aeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9c6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f9d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa56u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa5du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa61u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa6cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa73u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa77u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa7du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa87u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa92u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xc00u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fa99u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xc00u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faa0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x10u;
        g->ecx = 0xc00u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faa4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faacu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fab8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fac2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fac6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faccu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fad7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x10u;
        g->ecx = 0x300u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fadeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0 - 0x10u;
        g->ecx = 0x300u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fae2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faeau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031faf7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb02u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb04u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = 2u;
        (void)sp0;
        return 1;
    }
    case 0x1031fb7bu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb7eu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb84u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb87u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb8du:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb90u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb96u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb99u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebx = 1u;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fb9eu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fba1u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbb0u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbb3u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbb6u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbb9u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbbfu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbc9u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbd1u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbd5u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbd7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbe4u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbe7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbeau:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbeeu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbf7u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fbfeu:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->esi = arg2;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1031fc00u:
    {
        const uint32_t arg6 = rd32(sp0 + 0x18u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        ecx = g->ecx;
        g->esp = sp0 - 0x10u;
        g->eax = arg1;
        g->edx = 0xfffff3ffu;
        g->ebp = sp0 - 4u;
        g->edi = arg6;
        wr32(sp0 - 0x14u, sp0 + 4u);
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
