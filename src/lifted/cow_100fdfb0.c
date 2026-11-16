/* f_0x100fdfb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100fdfb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 116u);

    wr32(sp0 - 0x64u, in_ebx);
    if ((uint8_t)arg1 == 0u)
    {
        eax = in_eax;
        goto L_100fdfff;
    }
    if (arg2 == 0u)
    {
        eax = arg2;
        goto L_100fdfff;
    }
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x6cu, arg2);
    wr32(sp0 - 0x70u, sp0 - 0x60u);
    g->eax = sp0 - 0x60u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x3cu;
    t1 = cow_cdecl(g, COW_IMG(0x100fde80u), 13, sp0 - 0x60u, arg2, in_esi, in_ebx, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u), rd32(sp0 - 0x40u));
    t2 = g->ecx;
    t3 = g->edx;
    if (arg3 == 0u)
    {
        eax = t1;
        ecx = t2;
    }
    else
    {
        edx = t3;
        wr32(sp0 - 0x6cu, arg1);
        wr32(sp0 - 0x70u, sp0 - 0x60u);
        g->esp = sp0 - 0x68u;
        t4 = cow_thiscall_cdecl(g, COW_IMG(0x100fdf80u), sp0 - 0x60u, 2, sp0 - 0x60u, arg1);
        t5 = g->ecx;
        wr32(arg3, t4);
        eax = t4;
        ecx = t5;
    }
    wr32(sp0 - 0x6cu, arg1);
    wr32(sp0 - 0x70u, sp0 - 0x60u);
    g->ebx = arg1;
    g->esp = sp0 - 0x60u;
    t6 = cow_call_regs(g, COW_IMG(0x100fdf20u), eax, g->ecx, g->edx, 1, 4, sp0 - 0x60u, arg1, rd32(sp0 - 0x68u), rd32(sp0 - 0x64u));
    g->ebx = rd32(sp0 - 0x64u);
    g->esi = rd32(sp0 - 0x68u);
    return t6;
L_100fdfff: ;
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100fdfb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100fdfb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
