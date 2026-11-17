/* f_0x10318258 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10318258(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if ((uint8_t)arg4 == 0u)
    {
        ecx = self;
    }
    else
    {
        eax = rd32(arg3 + 4u) - 1u;
        if (eax != rd32(sp0 + 8u))
        {
            ecx = self;
        }
        else
        {
            t1 = arg1 + eax + (rd32(arg3) == 0x2du);
            wr8(t1, 0x30u);
            wr8(t1 + 1u, 0u);
            ecx = t1;
        }
    }
    if (rd32(arg3) != 0x2du)
    {
        edi = arg1;
    }
    else
    {
        wr8(arg1, 0x2du);
        edi = arg1 + 1u;
    }
    if ((int32_t)rd32(arg3 + 4u) > 0)
    {
        eax = rd32(arg3 + 4u);
        edx = in_edx;
        edi = eax + edi;
    }
    else
    {
        eax = rd32(arg3 + 4u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_call_regs(g, COW_IMG(0x103183e3u), eax, g->ecx, g->edx, 1, 4, edi, 1u, in_edi, in_esi);
        t3 = g->edx;
        wr8(edi, 0x30u);
        eax = t2;
        ecx = 1u;
        edx = t3;
        edi = edi + 1u;
    }
    if ((int32_t)rd32(sp0 + 8u) > 0)
    {
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x103183e3u), eax, g->ecx, g->edx, 1, 4, edi, 1u, in_edi, in_esi);
        t5 = g->edx;
        t6 = rd8(COW_IMG(0x103d0240u));
        wr8(edi, (uint8_t)t6);
        if ((int32_t)rd32(arg3 + 4u) < 0)
        {
            eax = (t4 & 0xffffff00u) | t6;
            edx = t5;
            esi = rd32(arg3 + 4u);
            edi = edi + 1u;
            if ((uint8_t)arg4 == 0u) goto L_103182d7;
            esi = -esi;
L_103182de: ;
            wr32(sp0 + 8u, esi);
L_103182e1: ;
            t7 = rd32(sp0 + 8u);
            g->ecx = 1u;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t8 = cow_call_regs(g, COW_IMG(0x103183e3u), eax, g->ecx, g->edx, 1, 4, edi, t7, in_edi, in_esi);
            t9 = g->ecx;
            t10 = g->edx;
            t11 = rd32(sp0 + 8u);
            g->esp = sp0 - 0x18u;
            cow_cdecl(g, COW_IMG(0x10316dd0u), 3, edi, 0x30u, t11);
        }
    }
    return arg1;
L_103182d7: ;
    if ((int32_t)rd32(sp0 + 8u) < (int32_t)-esi) goto L_103182e1;
    esi = -esi;
    goto L_103182de;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10318258(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10318258(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
