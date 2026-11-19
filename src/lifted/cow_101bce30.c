/* f_0x101bce30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101bce30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
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
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 20u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101bce3cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_101bce3c;
    case 0x101bce4cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bce4c;
    case 0x101bce56u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bce56;
    case 0x101bce67u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101bce67;
    case 0x101bce6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101bce6e;
    case 0x101bce76u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101bce76;
    case 0x101bce87u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bce87;
    case 0x101bce97u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; goto E_101bce97;
    case 0x101bcea1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101bcea1;
    case 0x101bcea5u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_101bcea5;
    default: break;
    }
#endif

    COW_AT(101bce30)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(self + 0xcu) == 0xffffffffu)
    {
        eax = rd32(self + 0xcu);
        ecx = self;
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
    }
    else
    {
        eax = rd32(self + 0xcu);
    COW_AT(101bce3c)
        wr32(sp0 - 0xcu, sp0 - 4u);
        wr32(sp0 - 0x10u, eax);
        g->eax = eax;
        g->ecx = sp0 - 4u;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_stdcall(g, rd32(COW_IMG(0x103291f8u)), 2, eax, sp0 - 4u);   /* kernel32.dll!GetExitCodeThread */
        t2 = g->ecx;
        t3 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            loc_4 = self;
            loc_8 = in_esi;
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
    COW_AT(101bce4c)
            if (rd32(sp0 - 4u) == 0x103u)
            {
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
            else
            {
    COW_AT(101bce56)
                t4 = rd32(self + 0xcu);
                wr32(sp0 - 0xcu, t4);
                g->eax = eax;
                g->ecx = ecx;
                g->edx = t4;
                g->esp = sp0 - 8u;
                t5 = cow_stdcall(g, rd32(COW_IMG(0x10329104u)), 1, t4);   /* kernel32.dll!CloseHandle */
                t6 = g->ecx;
                t7 = g->edx;
                wr32(self + 0xcu, 0xffffffffu);
                eax = t5;
                ecx = t6;
                edx = t7;
                loc_4 = rd32(sp0 - 4u);
                loc_8 = rd32(sp0 - 8u);
            }
        }
    }
    COW_AT(101bce67)
    if (rd8(self + 4u) == 0u) goto L_101bcea5;
    COW_AT(101bce6e)
    if ((int32_t)rd32(self + 8u) <= 90)
    {
        eax = rd32(self + 8u);
        goto L_101bcea1;
    }
    eax = rd32(self + 8u);
    COW_AT(101bce76)
    wr32(sp0 - 0xcu, COW_IMG(0x1037ca70u));
    wr32(sp0 - 0x10u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_stdcall(g, rd32(COW_IMG(0x10329324u)), 2, 0u, COW_IMG(0x1037ca70u));   /* user32.dll!FindWindowA */
    t9 = g->edx;
    if (t8 == 0u)
    {
        eax = t8;
        edx = t9;
    COW_AT(101bce87)
        wr32(sp0 - 0xcu, eax);
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10005600u), eax, rd32(COW_IMG(0x10455c20u)), g->edx, 0, 1, eax);
        wr8(self + 4u, 0u);
    }
    COW_AT(101bce97)
    wr32(self + 8u, 0u);
    g->esi = rd32(sp0 - 8u);
    return;
L_101bcea1: ;
    COW_AT(101bcea1)
    wr32(self + 8u, eax + 1u);
L_101bcea5: ;
    COW_AT(101bcea5)
    g->esi = loc_8;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101bce30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101bce3cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x101bce4cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101bce56u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x101bce67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bce6eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bce76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bce87u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bce97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bcea1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101bcea5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101bce30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101bce30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
