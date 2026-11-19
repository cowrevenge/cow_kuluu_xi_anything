/* f_0x10320ca8 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10320ca8(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10320cb5u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cb5;
    case 0x10320cb8u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cb8;
    case 0x10320cbeu: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cbe;
    case 0x10320cc1u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cc1;
    case 0x10320cc7u: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cc7;
    case 0x10320ccau: in_eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cca;
    case 0x10320cd7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cd7;
    case 0x10320ce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320ce6;
    case 0x10320cebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320ceb;
    case 0x10320cf0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cf0;
    case 0x10320cf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cf5;
    case 0x10320cf8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320cf8;
    case 0x10320d04u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320d04;
    case 0x10320d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320d17;
    case 0x10320d1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320d1c;
    case 0x10320d4bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10320d4b;
    default: break;
    }
#endif

    COW_AT(10320ca8)
    if ((arg2 & 8u) == 0u)
    {
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
    COW_AT(10320cb5)
        ebx = (in_ebx & 0xffffff00u) | 0x20u;
    }
    COW_AT(10320cb8)
    if ((arg2 >> 8u & 0x40u) != 0u)
    {
    COW_AT(10320cbe)
        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x80u);
    }
    COW_AT(10320cc1)
    if ((arg2 & 0x80u) != 0u)
    {
    COW_AT(10320cc7)
        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x10u);
    }
    COW_AT(10320cca)
    g->eax = in_eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103290e8u)), 1, arg1);   /* kernel32.dll!GetFileType */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_10320ce6;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10320cd7)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_stdcall(g, rd32(COW_IMG(0x10329168u)), 0);   /* kernel32.dll!GetLastError */
    t5 = g->ecx;
    t6 = g->edx;
    t7 = cow_call_regs(g, COW_IMG(0x10319c16u), g->eax, t5, t6, 1, 1, t4);
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_10320d17: ;
    COW_AT(10320d17)
    eax = 0xffffffffu;
L_10320d4b: ;
    COW_AT(10320d4b)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_10320ce6: ;
    COW_AT(10320ce6)
    if (eax != 2u)
    {
    COW_AT(10320cf0)
        if (eax == 3u)
        {
    COW_AT(10320cf5)
            ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 8u);
        }
    }
    else
    {
    COW_AT(10320ceb)
        ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | 0x40u);
    }
    COW_AT(10320cf8)
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t9 = cow_fastcall(g, COW_IMG(0x10320a48u), ecx, edx, 0);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0xffffffffu)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        esi = t9;
        goto L_10320d1c;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(10320d04)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t12 = cow_fastcall(g, COW_IMG(0x10319c89u), ecx, edx, 0);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(t12, 0x18u);
    t15 = cow_fastcall(g, COW_IMG(0x10319c92u), t13, t14, 0);
    t16 = g->edx;
    wr32(t15, 0u);
    eax = t15;
    edx = t16;
    goto L_10320d17;
L_10320d1c: ;
    COW_AT(10320d1c)
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x10320b6bu), g->eax, g->ecx, edx, 1, 2, esi, arg1);
    t17 = g->edx;
    t18 = rd32(COW_IMG(0x109f82e0u) + (uint32_t)((int32_t)esi >> 5u) * 4u);
    wr8((esi & 0x1fu) * 0x24u + t18 + 4u, (uint8_t)(ebx | 1u));
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x10320daeu), g->eax, g->ecx, t17, 1, 1, esi);
    t19 = g->edx;
    eax = esi;
    edx = t19;
    goto L_10320d4b;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10320ca8(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10320cb5u:
    {
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebx = in_ebx & 0xffffff00u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cb8u:
    {
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cbeu:
    {
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cc1u:
    {
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cc7u:
    {
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320ccau:
    {
        uint32_t ebx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cd7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320ce6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cebu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cf0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cf5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320cf8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320d04u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320d17u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320d1cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320d4bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10320ca8(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10320ca8(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
