/* f_0x102a8270 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102a8270(Guest* g)
{
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_ebx = g->ebx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102a828du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a828d;
    case 0x102a8299u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8299;
    case 0x102a82a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a82a4;
    case 0x102a82c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a82c8;
    case 0x102a82ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; esi = g->esi; edi = g->edi; g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a82cc;
    case 0x102a82d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a82d2;
    case 0x102a82e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a82e9;
    case 0x102a8326u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8326;
    case 0x102a832au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a832a;
    case 0x102a8331u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8331;
    case 0x102a8334u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8334;
    case 0x102a8337u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8337;
    case 0x102a833eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a833e;
    case 0x102a8358u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8358;
    case 0x102a836fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a836f;
    case 0x102a8386u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8386;
    case 0x102a8394u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_102a8394;
    default: break;
    }
#endif

    COW_AT(102a8270)
    if ((int32_t)rd32(sp0 + 8u) <= (int32_t)(uint16_t)rd32(COW_IMG(0x109aaaa8u)))
    {
        eax = in_eax;
        edx = (uint16_t)rd32(COW_IMG(0x109aaaa8u));
        goto L_102a8394;
    }
    ecx = rd32(COW_IMG(0x109aaaa8u));
    edx = (uint16_t)rd32(COW_IMG(0x109aaaa8u));
    esi = rd32(sp0 + 8u);
    COW_AT(102a828d)
    if ((uint16_t)ecx != 3u)
    {
        eax = rd32(sp0 + 4u);
        esi = esi - edx;
        goto L_102a82cc;
    }
    eax = rd32(sp0 + 4u);
    esi = esi - edx;
    COW_AT(102a8299)
    ecx = (uint32_t)(int8_t)rd8(eax);
    edx = (uint32_t)(int8_t)rd8(eax + 1u);
    ebx = (uint32_t)(int8_t)rd8(eax + 2u);
L_102a82a4: ;
    COW_AT(102a82a4)
    t1 = rd8(eax + 3u);
    t2 = rd8(eax + 4u);
    wr8(eax + 3u, (uint8_t)(ecx + (uint32_t)(int8_t)t1));
    t3 = rd8(eax + 5u);
    wr8(eax + 4u, (uint8_t)(edx + (uint32_t)(int8_t)t2));
    wr8(eax + 5u, (uint8_t)(ebx + (uint32_t)(int8_t)t3));
    if ((int32_t)(esi - 3u) > 0)
    {
        eax = eax + 3u;
        ecx = ecx + (uint32_t)(int8_t)t1;
        edx = edx + (uint32_t)(int8_t)t2;
        ebx = ebx + (uint32_t)(int8_t)t3;
        esi = esi - 3u;
        goto L_102a82a4;
    }
    eax = eax + 3u;
    edx = edx + (uint32_t)(int8_t)t2;
    COW_AT(102a82c8)
    g->edx = edx;
    return eax;
L_102a82cc: ;
    COW_AT(102a82cc)
    if ((uint16_t)ecx != 4u)
    {
        ebx = in_ebx;
        goto L_102a832a;
    }
    COW_AT(102a82d2)
    t4 = (uint32_t)(int8_t)rd8(eax + 2u);
    t5 = rd8(eax);
    t6 = rd8(eax + 1u);
    wr32(sp0 + 4u, t4);
    t7 = (uint32_t)(int8_t)rd8(eax + 3u);
    wr32(sp0 + 8u, t7);
    ecx = (uint32_t)(int8_t)t5;
    edx = (uint32_t)(int8_t)t6;
L_102a82e9: ;
    COW_AT(102a82e9)
    t8 = rd8(eax + 4u);
    t9 = rd8(eax + 5u);
    t10 = rd32(sp0 + 4u);
    wr8(eax + 4u, (uint8_t)(ecx + (uint32_t)(int8_t)t8));
    t11 = rd8(eax + 6u);
    wr8(eax + 5u, (uint8_t)(edx + (uint32_t)(int8_t)t9));
    t12 = t10 + (uint32_t)(int8_t)t11;
    t13 = rd8(eax + 7u);
    wr32(sp0 + 4u, t12);
    wr8(eax + 6u, (uint8_t)t12);
    t14 = (uint32_t)(int8_t)t13 + rd32(sp0 + 8u);
    wr32(sp0 + 8u, t14);
    wr8(eax + 7u, (uint8_t)t14);
    if ((int32_t)(esi - 4u) > 0)
    {
        eax = eax + 4u;
        ecx = ecx + (uint32_t)(int8_t)t8;
        edx = edx + (uint32_t)(int8_t)t9;
        esi = esi - 4u;
        goto L_102a82e9;
    }
    eax = eax + 4u;
    edx = edx + (uint32_t)(int8_t)t9;
    COW_AT(102a8326)
    g->edx = edx;
    return eax;
L_102a832a: ;
    COW_AT(102a832a)
    if (edx != 0u)
    {
        edi = edx;
    COW_AT(102a8331)
        if (edi != 1u)
        {
            edi = edi - 1u;
    COW_AT(102a8334)
            if (edi != 1u)
            {
    COW_AT(102a8337)
                if ((int32_t)(edx - 4u) <= 0) goto L_102a8358;
                edi = edx - 4u;
L_102a833e: ;
    COW_AT(102a833e)
                t15 = rd8(eax);
                t16 = rd8(eax + (uint16_t)ecx);
                wr8(eax + (uint16_t)ecx, (uint8_t)(t15 + t16));
                if (edi != 1u)
                {
                    eax = eax + 1u;
                    ecx = rd32(COW_IMG(0x109aaaa8u));
                    edx = (edx & 0xffffff00u) | t15;
                    ebx = (ebx & 0xffffff00u) | (uint8_t)(t15 + t16);
                    edi = edi - 1u;
                    goto L_102a833e;
                }
                eax = eax + 1u;
                ecx = rd32(COW_IMG(0x109aaaa8u));
                edx = (edx & 0xffffff00u) | t15;
                ebx = (ebx & 0xffffff00u) | (uint8_t)(t15 + t16);
            }
L_102a8358: ;
    COW_AT(102a8358)
            t17 = rd8(eax);
            t18 = rd8(eax + (uint16_t)ecx);
            wr8(eax + (uint16_t)ecx, (uint8_t)(t17 + t18));
            eax = eax + 1u;
            ecx = rd32(COW_IMG(0x109aaaa8u));
            edx = (edx & 0xffffff00u) | t17;
            ebx = (ebx & 0xffffff00u) | (uint8_t)(t17 + t18);
        }
    COW_AT(102a836f)
        t19 = rd8(eax);
        t20 = rd8(eax + (uint16_t)ecx);
        wr8(eax + (uint16_t)ecx, (uint8_t)(t19 + t20));
        eax = eax + 1u;
        ecx = rd32(COW_IMG(0x109aaaa8u));
        ebx = (ebx & 0xffffff00u) | (uint8_t)(t19 + t20);
    }
    COW_AT(102a8386)
    if ((int32_t)(esi - (uint16_t)ecx) > 0)
    {
        edx = (uint16_t)ecx;
        esi = esi - (uint16_t)ecx;
        goto L_102a832a;
    }
    edx = (uint16_t)ecx;
L_102a8394: ;
    COW_AT(102a8394)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102a8270(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102a828du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a8299u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a82a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a82c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a82ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0xcu;
        wr32(sp0 - 4u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x102a82d2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a82e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a8326u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a832au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a8331u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a8334u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a8337u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a833eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a8358u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a836fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a8386u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x102a8394u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102a8270(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102a8270(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
