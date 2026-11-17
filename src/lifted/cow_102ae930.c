/* f_0x102ae930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
uint32_t cow_fn_102ae930(Guest* g)
{
    double d8;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    t1 = rd32(rd32(arg1 + 0x48u));
    if (rd32(arg1 + 0x68u) != 0u)
    {
        ecx = t1;
        edx = in_edx;
        edi = rd32(arg1 + 0x44u);
        loc_8 = t1;
    }
    else
    {
        eax = rd32(arg1 + 0x68u);
        ecx = t1;
        edi = rd32(arg1 + 0x44u);
        loc_8 = t1;
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edi * 4u;
        g->esp = sp0 - 4u;
        t2 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, edi * 4u, COW_IMG(0x103bef68u), 0x538u, in_edi, in_esi, in_ebp, in_ebx, loc_8);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(arg1 + 0x68u, t2);
        ecx = t3;
        edx = t4;
    }
    if (rd32(arg1 + 0x64u) == 0u)
    {
        g->eax = edi * 4u;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t5 = cow_cdecl(g, COW_IMG(0x10275da0u), 9, 1u, edi * 4u, COW_IMG(0x103bef68u), 0x53au, in_edi, in_esi, in_ebp, in_ebx, loc_8);
        t6 = g->edx;
        wr32(arg1 + 0x64u, t5);
        if ((int32_t)edi <= 0)
        {
            edx = t6;
            goto L_102ae9a1;
        }
        eax = t5;
        ecx = 0u;
        edx = t6;
L_102ae999: ;
        wr32(eax + ecx * 4u, ecx);
        if ((int32_t)(ecx + 1u) < (int32_t)edi)
        {
            ecx = ecx + 1u;
            goto L_102ae999;
        }
    }
L_102ae9a1: ;
    t7 = rd32(arg1 + 0x68u);
    if (rd32(arg1 + 0x34u) != 0u)
    {
        eax = rd32(arg1 + 0x34u);
        ecx = t7;
        loc_4 = t7;
        ebp = rd32(eax + 0x54u);
    }
    else
    {
        eax = rd32(arg1 + 0x34u);
        ecx = t7;
        loc_4 = t7;
        ebp = 0u;
    }
    if ((int32_t)edi > 0)
    {
        eax = arg2 * 0xcu + ebp;
        ebx = loc_8 * 0xcu;
        ebp = loc_4;
        esi = 0u;
L_102ae9dd: ;
        d8 = fr(g, fr(g, fr(g, fr(g, (double)rdf32(eax) - (double)rdf32(arg3)) * (double)rdf32(arg4)) + fr(g, fr(g, (double)rdf32(eax + 8u) - (double)rdf32(arg3 + 8u)) * (double)rdf32(arg4 + 8u))) + fr(g, fr(g, (double)rdf32(eax + 4u) - (double)rdf32(arg3 + 4u)) * (double)rdf32(arg4 + 4u)));
        wrf32(ebp + esi * 4u, (float)d8);
        if ((int32_t)(esi + 1u) < (int32_t)edi)
        {
            eax = eax + ebx;
            esi = esi + 1u;
            goto L_102ae9dd;
        }
        eax = eax + ebx;
        ecx = arg3;
        edx = arg4;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x102aea30u), ecx, 3, arg1, 0u, edi - 1u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ae930(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ae930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
