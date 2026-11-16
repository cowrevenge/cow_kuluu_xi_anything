/* f_0x103173d1 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_103173d1(Guest* g)
{
    double d9;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    ecx = self;
    edx = in_edx;
    esi = arg1;
L_103173de: ;
    if ((int32_t)rd32(COW_IMG(0x103d023cu)) <= 1)
    {
        eax = rd8(rd8(esi) * 2u + rd32(COW_IMG(0x103d0030u))) & 8u;
        ecx = rd32(COW_IMG(0x103d0030u));
    }
    else
    {
        wr32(sp0 - 0x30u, 8u);
        wr32(sp0 - 0x34u, rd8(esi));
        g->edx = edx;
        t1 = rd8(esi);
        g->esp = sp0 - 0x28u;
        t2 = cow_thiscall_cdecl(g, COW_IMG(0x10315180u), ecx, 3, t1, 8u, in_edi);
        t3 = g->edx;
        eax = t2;
        ecx = 8u;
        edx = t3;
    }
    if (eax == 0u) goto L_1031740c;
    esi = esi + 1u;
    goto L_103173de;
L_1031740c: ;
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x34u;
    t4 = cow_call_regs(g, COW_IMG(0x10317480u), eax, g->ecx, g->edx, 1, 1, esi);
    t5 = g->edx;
    wr32(sp0 - 0x38u, t4);
    wr32(sp0 - 0x3cu, esi);
    wr32(sp0 - 0x40u, sp0 - 0x24u);
    g->eax = sp0 - 0x24u;
    g->esp = sp0 - 0x30u;
    t6 = cow_thiscall_cdecl(g, COW_IMG(0x1031ed6bu), rd32(sp0 - 0x38u), 4, sp0 - 0x24u, esi, t4, 0u);
    if (arg2 == 0u)
    {
        eax = t6;
    }
    else
    {
        eax = t6;
        t7 = esi + rd32(eax + 4u);
        wr32(arg2, t7);
    }
    if ((rd32(eax) & 0x240u) == 0u)
    {
        edx = rd32(eax);
        if ((edx & 0x81u) == 0u) goto L_1031746b;
        if (rd8(esi) != 0x2du)
        {
            x0 = rdf64(COW_IMG(0x103d2fecu));
        }
        else
        {
            x0 = rdf64(COW_IMG(0x103d2fecu));
            x0 = -x0;
        }
L_10317458: ;
        wrf64(sp0 - 0xcu, x0);
        g->esp = sp0 - 0x2cu;
        t8 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
        d9 = rdf64(sp0 - 0xcu);
        wr32(t8, 0x22u);
        x0 = d9;
    }
    else
    {
        if (arg2 == 0u)
        {
            x0 = 0.0;
        }
        else
        {
            wr32(arg2, arg1);
            x0 = 0.0;
        }
    }
L_10317477: ;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    fpush(g, x0);
    return;
L_1031746b: ;
    if (!(edx >> 8u & 1u)) goto L_10317474;
    x0 = 0.0;
    goto L_10317458;
L_10317474: ;
    x0 = rdf64(eax + 0x10u);
    goto L_10317477;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_103173d1(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_103173d1(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
