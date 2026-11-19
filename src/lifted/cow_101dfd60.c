/* f_0x101dfd60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101dfd60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 176u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101dfd73u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_101dfd73;
    case 0x101dfd7eu: ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_101dfd7e;
    case 0x101dfda3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101dfda3;
    case 0x101dfdacu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101dfdac;
    case 0x101dfdaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101dfdae;
    case 0x101dfdfcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101dfdfc;
    default: break;
    }
#endif

    COW_AT(101dfd60)
    if (arg1 != 1u)
    {
        edx = in_edx;
        esi = in_esi;
    }
    else
    {
    COW_AT(101dfd73)
        if (arg5 == 0u)
        {
            edx = in_edx;
            esi = in_esi;
        }
        else
        {
    COW_AT(101dfd7e)
            wr32(sp0 - 0x84u, in_esi);
            wr32(sp0 - 0x88u, arg5 - 0x200u);
            g->eax = arg5 - 0x200u;
            t1 = rd32(COW_IMG(0x106631e8u));
            t2 = rd32(COW_IMG(0x10667a74u));
            g->esp = sp0 - 0x84u;
            t3 = cow_fastcall(g, COW_IMG(0x101c8020u), t1, t2, 1, arg5 - 0x200u);
            t4 = g->ecx;
            if (t3 == 0u)
            {
                ecx = t4;
                esi = arg5 * 0x64u + t2;
    COW_AT(101dfdac)
                eax = 0u;
            }
            else
            {
                eax = t3;
                esi = arg5 * 0x64u + t2;
    COW_AT(101dfda3)
                t5 = rd8(eax + 1u);
                eax = t5;
                ecx = t5;
            }
    COW_AT(101dfdae)
            wr32(sp0 - 0x88u, eax);
            t6 = rd16(esi + 0xau);
            wr32(sp0 - 0x8cu, t6);
            t7 = rd16(esi + 0x2eu);
            wr32(sp0 - 0x90u, t7);
            wr32(sp0 - 0x94u, 0x55u);
            wr32(sp0 - 0x98u, 0xau);
            g->eax = t7;
            g->edx = t6;
            g->esp = sp0 - 0x90u;
            t8 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x55u);
            t9 = g->edx;
            wr32(sp0 - 0x94u, t8);
            wr32(sp0 - 0x98u, sp0 - 0x80u);
            g->esp = sp0 - 0x84u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, t8, rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u));
            wr32(sp0 - 0x9cu, 0x80808080u);
            wr32(sp0 - 0xa0u, 0u);
            wr32(sp0 - 0xa4u, sp0 - 0x80u);
            wr32(sp0 - 0xa8u, arg3);
            wr32(sp0 - 0xacu, arg2 + 0xcu);
            g->edx = sp0 - 0x80u;
            g->esp = sp0 - 0x80u;
            cow_cdecl(g, COW_IMG(0x10129f00u), 11, arg2 + 0xcu, arg3, sp0 - 0x80u, 0u, 0x80808080u, sp0 - 0x80u, rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u));
            t10 = g->edx;
            edx = t10;
            esi = rd32(sp0 - 0x84u);
        }
    }
    COW_AT(101dfdfc)
    g->esi = esi;
    g->edx = edx;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101dfd60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101dfd73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x80u;
        (void)sp0;
        return 1;
    }
    case 0x101dfd7eu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x80u;
        g->eax = arg5;
        (void)sp0;
        return 1;
    }
    case 0x101dfda3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x101dfdacu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x101dfdaeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x84u;
        (void)sp0;
        return 1;
    }
    case 0x101dfdfcu:
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
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101dfd60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101dfd60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
