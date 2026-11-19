/* f_0x1031f1c8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031f1c8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 96u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1031f1e2u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f1e2;
    case 0x1031f1eau: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_1031f1ea;
    case 0x1031f200u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_1031f200;
    case 0x1031f204u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_1031f204;
    case 0x1031f222u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x58u); in_esi = rd32(sp0 - 0x54u); in_ebx = rd32(sp0 - 0x50u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x50u); g->edi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x54u); goto E_1031f222;
    case 0x1031f237u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f237;
    case 0x1031f242u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f242;
    case 0x1031f256u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f256;
    case 0x1031f258u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f258;
    case 0x1031f260u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f260;
    case 0x1031f265u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f265;
    case 0x1031f274u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f274;
    case 0x1031f283u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f283;
    case 0x1031f287u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f287;
    case 0x1031f2a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f2a3;
    case 0x1031f2aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f2ae;
    case 0x1031f2b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f2b0;
    case 0x1031f2b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f2b6;
    case 0x1031f2bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f2bc;
    case 0x1031f2c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f2c6;
    case 0x1031f2ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f2cc;
    case 0x1031f2d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f2d0;
    case 0x1031f2dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f2db;
    case 0x1031f2feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f2fe;
    case 0x1031f308u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f308;
    case 0x1031f30au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f30a;
    case 0x1031f31cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f31c;
    case 0x1031f324u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f324;
    case 0x1031f329u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f329;
    case 0x1031f333u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f333;
    case 0x1031f341u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f341;
    case 0x1031f34cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f34c;
    case 0x1031f358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f358;
    case 0x1031f35eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f35e;
    case 0x1031f363u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1031f363;
    case 0x1031f369u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f369;
    case 0x1031f36du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f36d;
    case 0x1031f373u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1031f373;
    default: break;
    }
#endif

    COW_AT(1031f1c8)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x5cu, 0x480u);
    g->esp = sp0 - 0x50u;
    t1 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, self, in_edx, 1, 3, 0x480u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_1031f1ea;
    }
    eax = t1;
    edx = t2;
    COW_AT(1031f1e2)
    wr32(sp0 - 0x5cu, 0x1bu);
    g->esp = sp0 - 0x58u;
    cow_stdcall(g, COW_IMG(0x1031680cu), 1, 0x1bu);
    rt_fatal(g, COW_IMG(0x1031f1e4u), "no way on");
L_1031f1ea: ;
    COW_AT(1031f1ea)
    wr32(COW_IMG(0x109f82e0u), esi);
    wr32(COW_IMG(0x109f83e0u), 0x20u);
    eax = esi + 0x480u;
L_1031f200: ;
    COW_AT(1031f200)
    if (esi >= eax) goto L_1031f222;
    COW_AT(1031f204)
    wr8(esi + 4u, 0u);
    wr32(esi, 0xffffffffu);
    wr32(esi + 8u, 0u);
    wr8(esi + 5u, 0xau);
    eax = rd32(COW_IMG(0x109f82e0u)) + 0x480u;
    esi = esi + 0x24u;
    goto L_1031f200;
L_1031f222: ;
    COW_AT(1031f222)
    wr32(sp0 - 0x5cu, sp0 - 0x4cu);
    g->ecx = 0x480u;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_stdcall(g, rd32(COW_IMG(0x10329204u)), 1, sp0 - 0x4cu);   /* kernel32.dll!GetStartupInfoA */
    t3 = g->ecx;
    t4 = g->edx;
    if (rd16(sp0 - 0x1au) == 0u)
    {
        edx = t4;
    }
    else
    {
        ecx = t3;
        edx = t4;
    COW_AT(1031f237)
        if (rd32(sp0 - 0x18u) != 0u)
        {
            eax = rd32(sp0 - 0x18u);
    COW_AT(1031f242)
            t5 = eax + rd32(eax) + 4u;
            wr32(sp0 - 8u, t5);
            if ((int32_t)rd32(eax) < 2048)
            {
                ebx = eax + 4u;
                edi = rd32(eax);
                loc_8 = t5;
            }
            else
            {
                ebx = eax + 4u;
                loc_8 = t5;
    COW_AT(1031f256)
                edi = 0x800u;
            }
    COW_AT(1031f258)
            if ((int32_t)rd32(COW_IMG(0x109f83e0u)) < (int32_t)edi)
            {
    COW_AT(1031f260)
                eax = 0x800u;
                esi = COW_IMG(0x109f82e4u);
L_1031f265: ;
    COW_AT(1031f265)
                wr32(sp0 - 0x5cu, 0x480u);
                g->eax = eax;
                g->esp = sp0 - 0x50u;
                t6 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, ecx, edx, 1, 3, 0x480u, rd32(sp0 - 0x58u), rd32(sp0 - 0x54u));
                t7 = g->edx;
                if (t6 == 0u)
                {
                    edx = t7;
                    goto L_1031f2b0;
                }
                eax = t6;
                edx = t7;
    COW_AT(1031f274)
                wr32(COW_IMG(0x109f83e0u), rd32(COW_IMG(0x109f83e0u)) + 0x20u);
                wr32(esi, eax);
                ecx = eax + 0x480u;
L_1031f283: ;
    COW_AT(1031f283)
                if (eax >= ecx) goto L_1031f2a3;
    COW_AT(1031f287)
                wr8(eax + 4u, 0u);
                wr32(eax, 0xffffffffu);
                wr32(eax + 8u, 0u);
                wr8(eax + 5u, 0xau);
                eax = eax + 0x24u;
                ecx = rd32(esi) + 0x480u;
                goto L_1031f283;
            }
L_1031f2b6: ;
    COW_AT(1031f2b6)
            if ((int32_t)edi <= 0) goto L_1031f308;
            esi = 0u;
L_1031f2bc: ;
    COW_AT(1031f2bc)
            if (rd32(loc_8) != 0xffffffffu)
            {
                eax = loc_8;
                ecx = rd32(loc_8);
    COW_AT(1031f2c6)
                if (rd8(ebx) & 1u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebx);
    COW_AT(1031f2cc)
                    if ((eax & 8u) != 0u) goto L_1031f2db;
    COW_AT(1031f2d0)
                    wr32(sp0 - 0x5cu, ecx);
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 0x58u;
                    t8 = cow_stdcall(g, rd32(COW_IMG(0x103290e8u)), 1, ecx);   /* kernel32.dll!GetFileType */
                    t9 = g->edx;
                    if (t8 == 0u)
                    {
                        edx = t9;
                        loc_8 = rd32(sp0 - 8u);
                        goto L_1031f2fe;
                    }
                    edx = t9;
                    loc_8 = rd32(sp0 - 8u);
L_1031f2db: ;
    COW_AT(1031f2db)
                    t10 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)esi >> 5u) * 4u);
                    t11 = rd32(loc_8);
                    wr32((esi & 0x1fu) * 0x24u + t10, t11);
                    wr8((esi & 0x1fu) * 0x24u + t10 + 4u, rd8(ebx));
                }
            }
L_1031f2fe: ;
    COW_AT(1031f2fe)
            wr32(sp0 - 8u, loc_8 + 4u);
            if ((int32_t)(esi + 1u) < (int32_t)edi)
            {
                ebx = ebx + 1u;
                esi = esi + 1u;
                loc_8 = loc_8 + 4u;
                goto L_1031f2bc;
            }
        }
    }
L_1031f308: ;
    COW_AT(1031f308)
    ebx = 0u;
L_1031f30a: ;
    COW_AT(1031f30a)
    if (rd32(ebx * 0x24u + rd32(COW_IMG(0x109f82e0u))) != 0xffffffffu)
    {
        eax = ebx * 9u;
        ecx = rd32(COW_IMG(0x109f82e0u));
        esi = ebx * 0x24u + rd32(COW_IMG(0x109f82e0u));
    COW_AT(1031f369)
        wr8(esi + 4u, rd8(esi + 4u) | 0x80u);
    }
    else
    {
        ecx = rd32(COW_IMG(0x109f82e0u));
        esi = ebx * 0x24u + rd32(COW_IMG(0x109f82e0u));
    COW_AT(1031f31c)
        wr8(esi + 4u, 0x81u);
        if (ebx != 0u)
        {
    COW_AT(1031f329)
            eax = -(ebx != 1u) - 0xbu;
        }
        else
        {
    COW_AT(1031f324)
            wr32(sp0 - 0x5cu, 0xfffffff6u);
            eax = 0xfffffff6u;
        }
    COW_AT(1031f333)
        wr32(sp0 - 0x5cu, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t12 = cow_stdcall(g, rd32(COW_IMG(0x103292bcu)), 1, eax);   /* kernel32.dll!GetStdHandle */
        t13 = g->ecx;
        t14 = g->edx;
        if (t12 == 0xffffffffu)
        {
            eax = t12;
            ecx = t13;
            edx = t14;
            goto L_1031f358;
        }
        eax = t12;
        ecx = t13;
        edx = t14;
        edi = t12;
    COW_AT(1031f341)
        wr32(sp0 - 0x5cu, edi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t15 = cow_stdcall(g, rd32(COW_IMG(0x103290e8u)), 1, edi);   /* kernel32.dll!GetFileType */
        t16 = g->ecx;
        t17 = g->edx;
        if (t15 == 0u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            goto L_1031f358;
        }
        eax = t15;
        ecx = t16;
        edx = t17;
    COW_AT(1031f34c)
        wr32(esi, edi);
        if ((uint8_t)eax != 2u)
        {
            eax = (uint8_t)eax;
            goto L_1031f35e;
        }
        eax = (uint8_t)eax;
L_1031f358: ;
    COW_AT(1031f358)
        wr8(esi + 4u, rd8(esi + 4u) | 0x40u);
    }
L_1031f36d: ;
    COW_AT(1031f36d)
    if ((int32_t)(ebx + 1u) < 3)
    {
        ebx = ebx + 1u;
        goto L_1031f30a;
    }
    COW_AT(1031f373)
    wr32(sp0 - 0x5cu, rd32(COW_IMG(0x109f83e0u)));
    g->esp = sp0 - 0x58u;
    cow_stdcall(g, rd32(COW_IMG(0x103292b8u)), 1, rd32(COW_IMG(0x109f83e0u)));   /* kernel32.dll!SetHandleCount */
    g->ebx = rd32(sp0 - 0x50u);
    g->esi = rd32(sp0 - 0x54u);
    g->edi = rd32(sp0 - 0x58u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_1031f2a3: ;
    COW_AT(1031f2a3)
    if ((int32_t)rd32(COW_IMG(0x109f83e0u)) < (int32_t)edi)
    {
        esi = esi + 4u;
        loc_8 = rd32(sp0 - 8u);
        goto L_1031f265;
    }
    COW_AT(1031f2ae)
    loc_8 = rd32(sp0 - 8u);
    goto L_1031f2b6;
L_1031f2b0: ;
    COW_AT(1031f2b0)
    edi = rd32(COW_IMG(0x109f83e0u));
    loc_8 = rd32(sp0 - 8u);
    goto L_1031f2b6;
L_1031f35e: ;
    COW_AT(1031f35e)
    if (eax == 3u)
    {
    COW_AT(1031f363)
        wr8(esi + 4u, rd8(esi + 4u) | 8u);
    }
    goto L_1031f36d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031f1c8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1031f1e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x58u;
        g->ecx = 0x480u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f1eau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x58u;
        g->ecx = 0x480u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f200u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x58u;
        g->ecx = 0x480u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f204u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x58u;
        g->ecx = 0x480u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f222u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x58u);
        in_esi = rd32(sp0 - 0x54u);
        in_ebx = rd32(sp0 - 0x50u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x58u;
        g->ecx = 0x480u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f237u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1031f242u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1031f256u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->eax = 0x800u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1031f258u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->eax = 0x800u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1031f260u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->eax = 0x800u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x5cu, sp0 - 0x4cu);
        (void)sp0;
        return 1;
    }
    case 0x1031f265u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f274u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f283u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f287u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2a3u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2aeu:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2b0u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2b6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2c6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2ccu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2dbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f2feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f308u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f30au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f31cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f324u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f329u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f333u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f341u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f34cu:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f358u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f35eu:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f363u:
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
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f369u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f36du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1031f373u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x58u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031f1c8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031f1c8(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
