/* f_0x10114250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10114250(Guest* g)
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10114267u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10114267;
    case 0x1011428fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_1011428f;
    case 0x10114296u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_10114296;
    case 0x101142a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101142a2;
    case 0x101142acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101142ac;
    case 0x101142b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101142b5;
    case 0x101142c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101142c1;
    case 0x101142c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101142c8;
    case 0x101142dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101142dc;
    case 0x101142deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101142de;
    case 0x101142fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101142fb;
    case 0x10114307u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10114307;
    case 0x10114314u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10114314;
    default: break;
    }
#endif

    COW_AT(10114250)
    g->eax = rd32(self);
    g->edx = in_edx;
    t1 = rd32(self);
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, rd32(COW_IMG(0x103291c8u)), 2, t1, 0xffffffffu);   /* kernel32.dll!WaitForSingleObject */
    t3 = g->edx;
    if (t2 == 0xffffffffu)
    {
        edx = t3;
        goto L_10114314;
    }
    eax = t2;
    edx = t3;
    COW_AT(10114267)
    t4 = (eax & 0xffff0000u) | rd16(self + 0x10au);
    t5 = rd32(sp0 + 4u);
    wr16(self + 0x10au, (uint16_t)(t4 + 1u));
    if (self + (uint16_t)t4 * 0x10u + 8u == t5)
    {
        eax = t4 + 1u;
        ecx = (uint32_t)(uint16_t)t4 << 4u;
    }
    else
    {
        ecx = (uint32_t)(uint16_t)t4 << 4u;
        ebx = t5;
        esi = self + (uint16_t)t4 * 0x10u + 8u;
    COW_AT(1011428f)
        if (rd32(esi + 8u) != 0u)
        {
            eax = rd32(esi + 8u);
    COW_AT(10114296)
            t6 = rd32(eax) - 1u;
            t7 = rd32(eax);
            wr32(eax, t6);
            if (t7 >= 2u)
            {
                ecx = t7;
            }
            else
            {
                ecx = t7;
                edx = t6;
    COW_AT(101142a2)
                if (rd32(rd32(esi + 8u) + 4u) == 0u)
                {
                    eax = rd32(rd32(esi + 8u) + 4u);
                }
                else
                {
                    eax = rd32(rd32(esi + 8u) + 4u);
    COW_AT(101142ac)
                    g->ebx = ebx;
                    g->eax = eax;
                    g->esp = sp0 - 4u;
                    t8 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, eax, in_esi, in_ebx);
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                }
    COW_AT(101142b5)
                t10 = rd32(esi + 8u);
                g->esp = sp0 - 0xcu;
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t10, edx, 1, 1, t10);
                t11 = g->ecx;
                ecx = t11;
            }
    COW_AT(101142c1)
            wr32(esi + 8u, 0u);
        }
    COW_AT(101142c8)
        t12 = rd32(ebx);
        wr32(esi, t12);
        t13 = rd32(ebx + 4u);
        wr32(esi + 4u, t13);
        t14 = rd32(ebx + 8u);
        t15 = rd32(ebx + 8u);
        wr32(esi + 8u, t14);
        if (t15 == 0u)
        {
            eax = t14;
            edx = t12;
        }
        else
        {
            eax = t14;
            edx = t12;
    COW_AT(101142dc)
            wr32(eax, rd32(eax) + 1u);
        }
    }
    COW_AT(101142de)
    wr16(self + 0x10au, rd16(self + 0x10au) & 0xfu);
    if (rd16(self + 0x10au) != rd16(self + 0x108u))
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x108u);
    }
    else
    {
        eax = (eax & 0xffff0000u) | rd16(self + 0x108u);
    COW_AT(101142fb)
        wr16(self + 0x108u, (uint8_t)eax + 1u & 0xfu);
        eax = (uint8_t)eax + 1u & 0xfu;
    }
    COW_AT(10114307)
    t16 = rd32(self);
    wr32(sp0 + 4u, t16);
    g->esp = sp0;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    cow_tailcall(g, rd32(COW_IMG(0x103291ccu)), eax, t16, edx);
    return;
L_10114314: ;
    COW_AT(10114314)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10114250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10114267u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1011428fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10114296u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142a2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142c1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142c8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142dcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x101142fbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114307u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10114314u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10114250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10114250(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
