/* f_0x10057c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10057c20(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10057c30u: eax = g->eax; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10057c30;
    case 0x10057c34u: eax = g->eax; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10057c34;
    case 0x10057c36u: eax = g->eax; in_edx = g->edx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10057c36;
    case 0x10057c3eu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c3e;
    case 0x10057c43u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c43;
    case 0x10057c4fu: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c4f;
    case 0x10057c53u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c53;
    case 0x10057c55u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c55;
    case 0x10057c61u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c61;
    case 0x10057c67u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c67;
    case 0x10057c72u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c72;
    case 0x10057c74u: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c74;
    case 0x10057c7au: eax = g->eax; edx = g->edx; ebx = g->ebx; esi = g->esi; self = g->edi; in_esi = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 0xcu); goto E_10057c7a;
    case 0x10057c85u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10057c85;
    case 0x10057c91u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10057c91;
    case 0x10057ca4u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10057ca4;
    case 0x10057cb0u: eax = g->eax; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); goto E_10057cb0;
    default: break;
    }
#endif

    COW_AT(10057c20)
    if (rd32(self + 0x80u) == 0u)
    {
    COW_AT(10057c34)
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x80u);
    COW_AT(10057c30)
        eax = rd32(eax);
    }
    COW_AT(10057c36)
    if (rd32(eax + 0x78u) == 0u)
    {
        edx = in_edx;
        ebx = (in_ebx & 0xffffff00u) | 1u;
        goto L_10057c7a;
    }
    edx = in_edx;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    esi = rd32(eax + 0x78u);
L_10057c3e: ;
    COW_AT(10057c3e)
    if (rd8(esi) == 1u)
    {
    COW_AT(10057c43)
        if (rd32(self + 0x80u) == 0u)
        {
            ebx = ebx & 0xffffff00u;
    COW_AT(10057c53)
            eax = 0u;
        }
        else
        {
            eax = rd32(self + 0x80u);
            ebx = ebx & 0xffffff00u;
    COW_AT(10057c4f)
            eax = rd32(eax);
        }
    COW_AT(10057c55)
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x100573e0u), self, 3, eax, 0u, 0u);
        t1 = g->edx;
        edx = t1;
    }
    COW_AT(10057c61)
    if ((uint8_t)rd32(esi) == 0u)
    {
    COW_AT(10057c72)
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
    COW_AT(10057c67)
        eax = esi + (eax >> 8u & 0x1fu) * 4u;
    }
    COW_AT(10057c74)
    if (eax != 0u)
    {
        esi = eax;
        goto L_10057c3e;
    }
L_10057c7a: ;
    COW_AT(10057c7a)
    if (rd8(self + 0x141u) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x141u);
        goto L_10057cb0;
    }
    COW_AT(10057c85)
    if (rd32(self + 0x80u) == 0u)
    {
        ebx = ebx & 0xffffff00u;
        goto L_10057ca4;
    }
    eax = rd32(self + 0x80u);
    ebx = ebx & 0xffffff00u;
    COW_AT(10057c91)
    g->eax = rd32(eax);
    t2 = rd32(eax);
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x100573e0u), self, 3, t2, 0u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (t3 & 0xffffff00u) | (uint8_t)ebx;
L_10057ca4: ;
    COW_AT(10057ca4)
    g->eax = 0u;
    g->esp = sp0 - 8u;
    t4 = cow_thiscall(g, COW_IMG(0x100573e0u), self, 3, 0u, 0u, 0u);
    eax = t4;
L_10057cb0: ;
    COW_AT(10057cb0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10057c20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10057c30u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10057c34u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10057c36u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = (in_ebx & 0xffffff00u) | 1u;
        (void)sp0;
        return 1;
    }
    case 0x10057c3eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c43u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c4fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c53u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c55u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c61u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c67u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c74u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c7au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        self = g->edi;
        in_esi = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10057c85u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10057c91u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10057ca4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10057cb0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10057c20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10057c20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
