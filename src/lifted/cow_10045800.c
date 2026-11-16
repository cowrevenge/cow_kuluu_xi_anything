/* f_0x10045800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10045800(Guest* g)
{
    double d1;
    double d2;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
    double x0;
    double x1;
    double x2;
    const uint32_t in_eax = g->eax;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    eax = in_eax;
    ecx = 0u;
    ebp = arg1;
    esi = arg1;
    loc_10 = 0u;
    loc_8 = arg1;
    loc_c = arg1;
L_10045827: ;
    if ((double)rdf32(esi) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(esi);
    }
    else
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x103295d8u)), 1u);
        x0 = (double)rdf32(esi);
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    d1 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / x0);
    if (d1 != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        x0 = d1;
    }
    else
    {
        x0 = d1;
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
    }
    eax = 4u;
    edx = ebp;
L_10045862: ;
    d2 = fr(g, x0 * (double)rdf32(edx));
    wrf32(edx, (float)d2);
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = edx + 4u;
        goto L_10045862;
    }
    eax = eax - 1u;
    edx = edx + 4u;
    wrf32(esi, (float)x0);
    ebx = 0u;
    esi = loc_8;
    edi = arg1;
    loc_4 = edx;
L_1004587b: ;
    if (ebx != ecx)
    {
        eax = 0u;
        ecx = edi;
        edx = ebp;
        x1 = (double)rdf32(esi);
L_10045887: ;
        if (eax == loc_10)
        {
            x2 = x1;
            x2 = -fr(g, x2 * x0);
        }
        else
        {
            x2 = x1;
            x2 = fr(g, (double)rdf32(ecx) - fr(g, x2 * (double)rdf32(edx)));
        }
        wrf32(ecx, (float)x2);
        if ((int32_t)(eax + 1u) < 4)
        {
            eax = eax + 1u;
            ecx = ecx + 4u;
            edx = edx + 4u;
            goto L_10045887;
        }
        eax = eax + 1u;
        ecx = loc_10;
        edx = loc_4;
    }
    if ((int32_t)(ebx + 1u) < 4)
    {
        ebx = ebx + 1u;
        esi = esi + 0x10u;
        edi = edi + 0x10u;
        goto L_1004587b;
    }
    if ((int32_t)(ecx + 1u) < 4)
    {
        ebp = edx;
        loc_10 = ecx + 1u;
        ecx = ecx + 1u;
        loc_8 = loc_8 + 4u;
        loc_c = loc_c + 0x14u;
        goto L_1004581f;
    }
    return;
L_1004581f: ;
    esi = loc_c;
    goto L_10045827;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10045800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10045800(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
