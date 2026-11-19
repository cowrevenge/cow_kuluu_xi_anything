/* f_0x101dcc90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101dcc90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 272u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dcc9fu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dcc9f;
    case 0x101dccadu: ecx = g->ecx; edx = g->edx; goto E_101dccad;
    case 0x101dcce4u: ecx = g->ecx; edx = g->edx; goto E_101dcce4;
    case 0x101dccf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dccf1;
    default: break;
    }
#endif

    COW_AT(101dcc90)
    g->edx = in_edx;
    g->esp = sp0 - 0x100u;
    t1 = cow_stdcall(g, COW_IMG(0x100e48d0u), 0);
    t2 = g->edx;
    if ((uint8_t)t1 >= 2u)
    {
        eax = t1;
        edx = t2;
        goto L_101dccf1;
    }
    edx = t2;
    COW_AT(101dcc9f)
    if (rd32(arg3 + 4u) != 0u) goto L_101dcce4;
    ecx = rd32(arg3 + 4u);
    COW_AT(101dccad)
    wr32(sp0 - 0x104u, arg3 + 8u);
    wr32(sp0 - 0x108u, 0x28u);
    wr32(sp0 - 0x10cu, 9u);
    g->eax = arg3 + 8u;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x104u;
    t3 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x28u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x108u, t3);
    wr32(sp0 - 0x10cu, sp0 - 0x100u);
    g->eax = sp0 - 0x100u;
    g->edx = t5;
    g->esp = sp0 - 0xf8u;
    t6 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, t3, arg3 + 8u, rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu));
    t7 = g->edx;
    wr32(sp0 - 0x104u, sp0 - 0x100u);
    g->edx = t7;
    g->esp = sp0 - 0x100u;
    t8 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x100u);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_101dcce4: ;
    COW_AT(101dcce4)
    wr32(sp0 - 0x104u, 0x7cu);
    g->eax = arg3;
    g->edx = edx;
    g->esp = sp0 - 0x100u;
    t10 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x7cu);
    t11 = g->edx;
    eax = t10;
    edx = t11;
L_101dccf1: ;
    COW_AT(101dccf1)
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dcc90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dcc9fu:
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
    case 0x101dccadu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101dcce4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edx;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x100u;
        g->eax = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101dccf1u:
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
void cow_adapter_101dcc90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dcc90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
