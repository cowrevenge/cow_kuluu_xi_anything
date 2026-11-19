/* f_0x101dcd80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101dcd80(Guest* g)
{
    uint32_t eax;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 148u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dcd95u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x84u); goto E_101dcd95;
    case 0x101dcdc0u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0x84u); g->esi = rd32(sp0 - 0x84u); goto E_101dcdc0;
    case 0x101dcdebu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dcdeb;
    case 0x101dcdf5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101dcdf5;
    case 0x101dcdfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101dcdfd;
    case 0x101dce06u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101dce06;
    case 0x101dce16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101dce16;
    default: break;
    }
#endif

    COW_AT(101dcd80)
    wr32(sp0 - 0x84u, in_esi);
    if (rd32(arg3 + 8u) != 0u)
    {
        eax = rd32(arg3 + 8u);
    COW_AT(101dcdc0)
        wr32(sp0 - 0x88u, arg3 + 0x10u);
        wr32(sp0 - 0x8cu, 0xfu);
        wr32(sp0 - 0x90u, 0xau);
        g->eax = eax;
        g->ecx = self;
        g->edx = arg3 + 0x10u;
        g->esp = sp0 - 0x88u;
        t6 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0xfu);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(sp0 - 0x8cu, t6);
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        g->ecx = t7;
        g->edx = t8;
        g->esp = sp0 - 0x7cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t6, arg3 + 0x10u, in_esi, rd32(sp0 - 0x80u));
        t9 = g->ecx;
        t10 = g->edx;
        t11 = rd32(COW_IMG(0x10663490u)) - 1u;
        t12 = rd32(COW_IMG(0x10663490u));
        wr32(COW_IMG(0x10663490u), t11);
        if ((int32_t)(t12 - 1u) >= 0)
        {
            eax = t11;
            ecx = t9;
            edx = t10;
        }
        else
        {
            eax = t11;
            ecx = t9;
            edx = t10;
    COW_AT(101dcdeb)
            wr32(COW_IMG(0x10663490u), 0u);
        }
    }
    else
    {
    COW_AT(101dcd95)
        wr32(sp0 - 0x88u, arg3 + 0x10u);
        wr32(sp0 - 0x8cu, 0xeu);
        wr32(sp0 - 0x90u, 0xau);
        g->eax = arg3 + 0x10u;
        g->edx = in_edx;
        g->esp = sp0 - 0x88u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0xeu);
        t2 = g->edx;
        wr32(sp0 - 0x8cu, t1);
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        g->ecx = sp0 - 0x80u;
        g->edx = t2;
        g->esp = sp0 - 0x7cu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t1, arg3 + 0x10u, in_esi, rd32(sp0 - 0x80u));
        t3 = g->ecx;
        t4 = g->edx;
        t5 = rd32(COW_IMG(0x10663490u)) + 1u;
        wr32(COW_IMG(0x10663490u), t5);
        eax = t5;
        ecx = t3;
        edx = t4;
    }
    COW_AT(101dcdf5)
    if (rd8(arg3 + 0xcu) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0xcu);
        esi = rd32(sp0 - 0x84u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(arg3 + 0xcu);
        esi = rd32(sp0 - 0x84u);
    COW_AT(101dcdfd)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x80u;
        t13 = cow_stdcall(g, COW_IMG(0x100e48d0u), 0);
        t14 = g->edx;
        if ((uint8_t)t13 >= 2u)
        {
            eax = t13;
            edx = t14;
        }
        else
        {
            eax = t13;
            edx = t14;
    COW_AT(101dce06)
            wr32(sp0 - 0x84u, sp0 - 0x80u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x80u;
            t15 = cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x80u);
            t16 = g->edx;
            eax = t15;
            edx = t16;
        }
    }
    COW_AT(101dce16)
    g->esi = esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dcd80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dcd95u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x84u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101dcdc0u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0x84u);
        g->esp = sp0 - 0x84u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101dcdebu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x84u;
        g->esi = arg3;
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101dcdf5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 0x84u;
        g->esi = arg3;
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101dcdfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101dce06u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x101dce16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x80u;
        wr32(sp0 - 0x90u, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dcd80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dcd80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
