/* f_0x10097bc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10097bc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10097bd0u: in_eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097bd0;
    case 0x10097bd7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097bd7;
    case 0x10097be7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097be7;
    case 0x10097bedu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097bed;
    case 0x10097bfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097bfb;
    case 0x10097c0au: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c0a;
    case 0x10097c1au: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c1a;
    case 0x10097c1bu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c1b;
    case 0x10097c27u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c27;
    case 0x10097c28u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c28;
    case 0x10097c34u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c34;
    case 0x10097c35u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c35;
    case 0x10097c41u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c41;
    case 0x10097c42u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c42;
    case 0x10097c49u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c49;
    case 0x10097c4bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c4b;
    case 0x10097c52u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c52;
    case 0x10097c55u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c55;
    case 0x10097c61u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c61;
    case 0x10097c62u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c62;
    case 0x10097c6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c6e;
    case 0x10097c6fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c6f;
    case 0x10097c7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c7b;
    case 0x10097c7cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c7c;
    case 0x10097c83u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c83;
    case 0x10097c8au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c8a;
    case 0x10097c96u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097c96;
    case 0x10097c97u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; zf = g->zf; goto E_10097c97;
    case 0x10097ca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097ca3;
    case 0x10097ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; zf = g->zf; goto E_10097ca5;
    default: break;
    }
#endif

    COW_AT(10097bc0)
    if (rd16(rd32(COW_IMG(0x104dfd98u)) + 0x40d82u) == 0u)
    {
        ecx = rd32(COW_IMG(0x104dfd98u));
        goto L_10097bd7;
    }
    ecx = rd32(COW_IMG(0x104dfd98u));
    COW_AT(10097bd0)
    return (in_eax & 0xffffff00u) | rd8(ecx + 0x40db4u);
L_10097bd7: ;
    COW_AT(10097bd7)
    if ((int32_t)rd16(ecx + 0x40d80u) > 288)
    {
        eax = rd16(ecx + 0x40d80u);
        goto L_10097c42;
    }
    eax = rd16(ecx + 0x40d80u);
    zf = rd16(ecx + 0x40d80u) == 0x120u;
    COW_AT(10097be7)
    if (zf) goto L_10097c6f;
    COW_AT(10097bed)
    if (eax - 0xc7u > 0x3bu)
    {
        eax = eax - 0xc7u;
        goto L_10097ca3;
    }
    eax = eax - 0xc7u;
    COW_AT(10097bfb)
    t1 = rd32(COW_IMG(0x10097ca8u) + rd8(COW_IMG(0x10097cc4u) + eax) * 4u);
    switch (t1 - RD)
    {
    case 0x10097c0au: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c0a;
    case 0x10097c1bu: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c1b;
    case 0x10097c28u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c28;
    case 0x10097c35u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c35;
    case 0x10097c55u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c55;
    case 0x10097c62u: edx = rd8(COW_IMG(0x10097cc4u) + eax); goto L_10097c62;
    case 0x10097ca3u: goto L_10097ca3;
    default: rt_fatal(g, COW_IMG(0x10097c03u), "switch");
    }
    return 0;
L_10097c0a: ;
    COW_AT(10097c0a)
    if (rd8(ecx + 0x40db4u) != 4u)
    {
        eax = (eax & 0xffffff00u) | 4u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 4u;
    COW_AT(10097c1a)
    return eax;
L_10097c1b: ;
    COW_AT(10097c1b)
    if (rd8(ecx + 0x40db4u) != 5u)
    {
        eax = (eax & 0xffffff00u) | 5u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 5u;
    COW_AT(10097c27)
    return eax;
L_10097c28: ;
    COW_AT(10097c28)
    if (rd8(ecx + 0x40db4u) != 7u)
    {
        eax = (eax & 0xffffff00u) | 7u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 7u;
    COW_AT(10097c34)
    return eax;
L_10097c35: ;
    COW_AT(10097c35)
    if (rd8(ecx + 0x40db4u) != 8u)
    {
        eax = (eax & 0xffffff00u) | 8u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 8u;
    COW_AT(10097c41)
    return eax;
L_10097c42: ;
    COW_AT(10097c42)
    if ((int32_t)eax > 291) goto L_10097c7c;
    zf = eax == 0x123u;
    COW_AT(10097c49)
    if (zf) goto L_10097c6f;
    COW_AT(10097c4b)
    if (eax == 0x121u)
    {
        eax = eax - 0x121u;
        edx = in_edx;
        goto L_10097c62;
    }
    eax = eax - 0x121u;
    COW_AT(10097c52)
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_10097ca3;
    }
    eax = eax - 1u;
    edx = in_edx;
L_10097c55: ;
    COW_AT(10097c55)
    if (rd8(ecx + 0x40db4u) != 2u)
    {
        eax = (eax & 0xffffff00u) | 2u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 2u;
    COW_AT(10097c61)
    return eax;
L_10097c62: ;
    COW_AT(10097c62)
    if (rd8(ecx + 0x40db4u) != 1u)
    {
        eax = (eax & 0xffffff00u) | 1u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 1u;
    COW_AT(10097c6e)
    return eax;
L_10097c6f: ;
    COW_AT(10097c6f)
    if (rd8(ecx + 0x40db4u) != 3u)
    {
        eax = (eax & 0xffffff00u) | 3u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 3u;
    COW_AT(10097c7b)
    return eax;
L_10097c7c: ;
    COW_AT(10097c7c)
    if (eax == 0x124u) goto L_10097c97;
    COW_AT(10097c83)
    if (eax != 0x2e9u) goto L_10097ca3;
    COW_AT(10097c8a)
    if (rd8(ecx + 0x40db4u) != 6u)
    {
        eax = (eax & 0xffffff00u) | 6u;
        goto L_10097ca3;
    }
    eax = (eax & 0xffffff00u) | 6u;
    COW_AT(10097c96)
    return eax;
L_10097c97: ;
    COW_AT(10097c97)
    if (rd8(ecx + 0x40db4u) == 9u)
    {
        eax = (eax & 0xffffff00u) | 9u;
        goto L_10097ca5;
    }
    eax = (eax & 0xffffff00u) | 9u;
L_10097ca3: ;
    COW_AT(10097ca3)
    eax = eax & 0xffffff00u;
L_10097ca5: ;
    COW_AT(10097ca5)
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10097bc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10097bd0u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_eax;
        uint32_t zf;
        in_eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097bd7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097be7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097bedu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097bfbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c0au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c1au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c1bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c27u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c28u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c34u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c41u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c4bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c61u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c62u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097c97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097ca3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10097ca5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        zf = g->zf;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10097bc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10097bc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
