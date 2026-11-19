/* f_0x101dcd10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101dcd10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 272u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dcd29u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dcd29;
    case 0x101dcd2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dcd2e;
    case 0x101dcd42u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dcd42;
    case 0x101dcd77u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dcd77;
    default: break;
    }
#endif

    COW_AT(101dcd10)
    if (rd32(rd32(COW_IMG(0x10664508u)) + 0x54u) != rd32(COW_IMG(0x10663488u)))
    {
        eax = rd32(rd32(COW_IMG(0x10664508u)) + 0x54u);
        edx = rd32(COW_IMG(0x10663488u));
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x10664508u)) + 0x54u);
        ecx = rd32(COW_IMG(0x10664508u));
        edx = rd32(COW_IMG(0x10663488u));
    COW_AT(101dcd29)
        g->eax = eax;
        g->esp = sp0 - 0x100u;
        t1 = cow_fastcall(g, COW_IMG(0x10210840u), ecx, edx, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    COW_AT(101dcd2e)
    g->eax = eax;
    g->ecx = rd32(COW_IMG(0x105781b8u));
    g->edx = edx;
    t3 = rd32(COW_IMG(0x105781b8u));
    g->esp = sp0 - 0x100u;
    t4 = cow_stdcall(g, COW_IMG(0x101338e0u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_stdcall(g, COW_IMG(0x100e48d0u), 0);
    t8 = g->edx;
    if ((uint8_t)t7 >= 2u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        edx = t8;
    COW_AT(101dcd42)
        wr32(sp0 - 0x104u, arg3 + 4u);
        wr32(sp0 - 0x108u, 0x29u);
        wr32(sp0 - 0x10cu, 9u);
        g->eax = eax;
        g->ecx = arg3 + 4u;
        g->esp = sp0 - 0x104u;
        t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x29u);
        t10 = g->ecx;
        wr32(sp0 - 0x108u, t9);
        wr32(sp0 - 0x10cu, sp0 - 0x100u);
        g->edx = sp0 - 0x100u;
        g->esp = sp0 - 0xf8u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t9, arg3 + 4u, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
        t11 = g->edx;
        wr32(sp0 - 0x104u, sp0 - 0x100u);
        g->eax = sp0 - 0x100u;
        g->edx = t11;
        g->esp = sp0 - 0x100u;
        t12 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
        t13 = g->edx;
        eax = t12;
        edx = t13;
    }
    COW_AT(101dcd77)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dcd10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dcd29u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x101dcd2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x101dcd42u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    case 0x101dcd77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dcd10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dcd10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
