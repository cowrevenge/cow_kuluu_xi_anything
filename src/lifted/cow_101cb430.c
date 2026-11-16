/* f_0x101cb430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=12 */
void cow_fn_101cb430(Guest* g)
{
    uint32_t cf;
    double d1;
    double d6;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg12 = rd32(g->esp + 0x30u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg7 != rd8(rd32(sp0 + 0x20u)))
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(sp0 + 0x20u));
        esi = rd32(sp0 + 0x20u);
        cf = (uint8_t)arg7 < rd8(rd32(sp0 + 0x20u));
        if (!cf)
        {
            wr32(sp0 + 0x20u, (uint8_t)eax);
            x0 = (double)(int32_t)rd32(sp0 + 0x20u);
        }
        else
        {
            wr32(sp0 + 0x20u, (uint8_t)arg7);
            x0 = (double)(int32_t)rd32(sp0 + 0x20u);
        }
    }
    else
    {
        esi = rd32(sp0 + 0x20u);
        wr32(sp0 + 0x20u, (uint8_t)arg7);
        x0 = (double)(int32_t)rd32(sp0 + 0x20u);
    }
    d1 = fr(g, x0 * (double)rdf32(COW_IMG(0x10329a18u)));
    wrf32(sp0 + 0x20u, (float)d1);
    t2 = rd32(sp0 + 0x20u);
    g->ecx = arg1;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x101cb280u), 11, arg1, arg2, arg3, arg4, arg5, arg6, t2, arg9, arg10, arg11, arg12);
    t3 = g->ecx;
    t4 = (in_ebx & 0xffffff00u) | rd8(esi);
    t5 = (uint8_t)arg7 - (uint8_t)t4;
    wr32(sp0 + 0x20u, t5);
    g->ecx = t3;
    d6 = fr(g, (double)(int32_t)rd32(sp0 + 0x20u) * (double)rdf32(COW_IMG(0x1032ae5cu)));
    fpush(g, d6);
    t7 = cow_call_regs(g, COW_IMG(0x10311c6cu), t5, g->ecx, g->edx, 1, 0);
    t8 = g->ecx;
    if (t7 == 0u)
    {
        ecx = t8;
        goto L_101cb4eb;
    }
    eax = t7;
    ebx = t4;
    wr8(esi, (uint8_t)((uint8_t)eax + (uint8_t)ebx));
    return;
L_101cb4eb: ;
    wr8(esi, (uint8_t)arg7);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cb430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cb430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
