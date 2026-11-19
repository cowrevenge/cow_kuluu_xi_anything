/* f_0x1022f150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1022f150(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
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
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1022f163u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1022f163;
    case 0x1022f167u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1022f167;
    case 0x1022f16fu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1022f16f;
    case 0x1022f177u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1022f177;
    case 0x1022f199u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1022f199;
    case 0x1022f1abu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1022f1ab;
    case 0x1022f1bbu: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1022f1bb;
    case 0x1022f1c2u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1022f1c2;
    case 0x1022f1d0u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1022f1d0;
    case 0x1022f1d8u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1022f1d8;
    case 0x1022f1e9u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1022f1e9;
    case 0x1022f1f0u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1022f1f0;
    case 0x1022f1feu: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1022f1fe;
    case 0x1022f218u: eax = g->eax; edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1022f218;
    case 0x1022f21eu: edx = g->edx; ebx = g->ebx; self = g->esi; goto E_1022f21e;
    case 0x1022f235u: eax = g->eax; edx = g->edx; ebx = g->ebx; goto E_1022f235;
    case 0x1022f237u: edx = g->edx; ebx = g->ebx; goto E_1022f237;
    default: break;
    }
#endif

    COW_AT(1022f150)
    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    wr32(sp0 - 0x14u, 0u);
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_thiscall(g, COW_IMG(0x101c5b90u), self + 0x78u, 1, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(1022f163)
    if (eax == 0u) goto L_1022f1c2;
    COW_AT(1022f167)
    wr32(sp0 - 0x14u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_thiscall(g, COW_IMG(0x101c5b30u), self + 0x78u, 1, 0u);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    COW_AT(1022f16f)
    if (eax == 0u) goto L_1022f235;
    COW_AT(1022f177)
    t5 = rd32(self + 0x8cu);
    wr32(sp0 - 0x14u, t5);
    t6 = rd32(self + 0x90u);
    wr32(sp0 - 0x18u, t6);
    wr32(self + 0x88u, 1u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10257d00u), self + 0x68u, 2, t6, t5);
    COW_AT(1022f199)
    if (rd32(sp0 + 4u) != rd32(self + 0x84u)) goto L_1022f235;
    edx = rd32(sp0 + 4u);
    COW_AT(1022f1ab)
    wr32(sp0 - 0x14u, 2u);
    t7 = rd32(self + 0x90u);
    wr32(sp0 - 0x18u, t7);
    g->eax = t7;
    g->esp = sp0 - 0x10u;
    t8 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, t7, 2u);
    eax = t8;
    COW_AT(1022f1bb)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax;
L_1022f1c2: ;
    COW_AT(1022f1c2)
    if (rd32(self + 0x88u) == 0u)
    {
        eax = rd32(self + 0x88u);
        ebx = rd32(sp0 + 4u);
        goto L_1022f1f0;
    }
    eax = rd32(self + 0x88u);
    ebx = rd32(sp0 + 4u);
    COW_AT(1022f1d0)
    if (ebx != rd32(self + 0x84u)) goto L_1022f1f0;
    COW_AT(1022f1d8)
    wr32(sp0 - 0x14u, 2u);
    t9 = rd32(self + 0x90u);
    wr32(sp0 - 0x18u, t9);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t10 = cow_stdcall(g, COW_IMG(0x10257d60u), 2, t9, 2u);
    eax = t10;
    COW_AT(1022f1e9)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return eax;
L_1022f1f0: ;
    COW_AT(1022f1f0)
    wr32(sp0 - 0x14u, ebx);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x10257ca0u), self + 0x68u, 2, sp0 + 4u, ebx);
    COW_AT(1022f1fe)
    t11 = rd32(self + 0x8cu);
    wr32(sp0 - 0x14u, t11);
    t12 = rd32(sp0 + 4u);
    wr32(sp0 - 0x18u, t12);
    t13 = rd32(self + 0x90u);
    wr32(sp0 - 0x1cu, t13);
    g->eax = t11;
    g->esp = sp0 - 0x10u;
    t14 = cow_thiscall(g, COW_IMG(0x101c5a70u), self + 0x78u, 3, t13, t12, t11);
    eax = t14;
    COW_AT(1022f218)
    if ((int32_t)eax < 0) goto L_1022f237;
    COW_AT(1022f21e)
    wr32(self + 0x84u, ebx);
    wr32(self + 0x88u, 0u);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return 0u;
L_1022f235: ;
    COW_AT(1022f235)
L_1022f237: ;
    COW_AT(1022f237)
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1022f150(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1022f163u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1022f167u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1022f16fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022f177u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022f199u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1abu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->edi = self + 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1bbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1c2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1d0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1d8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1e9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1f0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x1022f1feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        g->edi = self + 0x78u;
        wr32(sp0 - 0x18u, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1022f218u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022f21eu:
    {
        uint32_t ebx;
        uint32_t edx;
        uint32_t self;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        g->esp = sp0 - 0x10u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022f235u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1022f237u:
    {
        uint32_t ebx;
        uint32_t edx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x10u;
        g->eax = 0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f150(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1022f150(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
