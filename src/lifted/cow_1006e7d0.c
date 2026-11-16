/* f_0x1006e7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=7 */
void cow_fn_1006e7d0(Guest* g)
{
    double d1;
    double d10;
    double d2;
    double d3;
    double d4;
    double d5;
    double d6;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t esi;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int32_t)rd32(sp0 + 0xcu) > 0)
    {
        ebx = rd32(sp0 + 0xcu);
        eax = in_eax;
        ecx = rd32(sp0 + 0x10u);
        esi = arg1;
        edi = arg2;
L_1006e7ef: ;
        d1 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(esi + 8u) * (double)rdf32(ecx + 0x28u)) + fr(g, (double)rdf32(ecx + 8u) * (double)rdf32(esi))) + fr(g, (double)rdf32(esi + 4u) * (double)rdf32(ecx + 0x18u))) + (double)rdf32(ecx + 0x38u));
        d2 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx + 4u) * (double)rdf32(esi)) + fr(g, (double)rdf32(ecx + 0x14u) * (double)rdf32(esi + 4u))) + fr(g, (double)rdf32(ecx + 0x24u) * (double)rdf32(esi + 8u))) + (double)rdf32(ecx + 0x34u));
        d3 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(ecx) * (double)rdf32(esi)) + fr(g, (double)rdf32(ecx + 0x10u) * (double)rdf32(esi + 4u))) + fr(g, (double)rdf32(ecx + 0x20u) * (double)rdf32(esi + 8u))) + (double)rdf32(ecx + 0x30u));
        d4 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg5 + 0x20u)) + fr(g, d2 * (double)rdf32(arg5 + 0x10u))) + fr(g, d3 * (double)rdf32(arg5))) + (double)rdf32(arg5 + 0x30u));
        wrf32(sp0 + 0xcu, (float)d4);
        d5 = fr(g, fr(g, fr(g, fr(g, d1 * (double)rdf32(arg5 + 0x24u)) + fr(g, d2 * (double)rdf32(arg5 + 0x14u))) + fr(g, d3 * (double)rdf32(arg5 + 4u))) + (double)rdf32(arg5 + 0x34u));
        wrf32(sp0 + 0x10u, (float)d5);
        d6 = fr(g, fr(g, fr(g, fr(g, d3 * (double)rdf32(arg5 + 0xcu)) + fr(g, d1 * (double)rdf32(arg5 + 0x2cu))) + fr(g, d2 * (double)rdf32(arg5 + 0x1cu))) + (double)rdf32(arg5 + 0x3cu));
        d7 = (double)rdf32(COW_IMG(0x103295d8u));
        wrf32(edi + 8u, (float)d6);
        if (!(d6 < d7))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
            x0 = d6;
            if (x0 != (double)rdf32(COW_IMG(0x103295d8u)))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                x0 = (double)rdf32(COW_IMG(0x1032961cu));
            }
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d6, d7, 1u);
            x0 = d6;
            x0 = -x0;
        }
        d8 = fr(g, fr(g, fr(g, (double)rdf32(sp0 + 0xcu) * fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0)) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(sp0 + 0x18u));
        d9 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
        wrf32(edi, (float)d8);
        d10 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - fr(g, d9 * (double)rdf32(sp0 + 0x10u))) * (double)rdf32(sp0 + 0x1cu));
        wrf32(edi + 4u, (float)d10);
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 0xcu;
            edi = edi + 0xcu;
            goto L_1006e7ef;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1006e7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1006e7d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */
