/* f_0x1031454a - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1031454a(Guest* g)
{
    double d2;
    double d5;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 0xau);
    if ((t1 & 0x7ff0u) != 0x7ff0u)
    {
        eax = t1;
        edx = t1 & 0x7ff0u;
        goto L_1031458a;
    }
    edx = t1 & 0x7ff0u;
    d2 = rdf64(sp0 + 4u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t3 = cow_cdecl(g, COW_IMG(0x1031f64bu), 2, cow_dlo(d2), cow_dhi(d2));
    t4 = g->edx;
    if (t3 == 1u)
    {
        edx = t4;
        goto L_10314583;
    }
    eax = t3 - 1u;
    edx = t4;
    if (eax == 1u)
    {
        loc_8 = 4u;
    }
    else
    {
        eax = eax - 1u;
        if (eax == 1u)
        {
            loc_8 = 2u;
        }
        else
        {
            loc_8 = 1u;
        }
    }
    g->edx = edx;
    return loc_8;
L_10314583: ;
    g->edx = edx;
    return 0x200u;
L_1031458a: ;
    if ((uint16_t)edx != 0u)
    {
        ecx = eax & 0x8000u;
        eax = eax & 0x8000u;
        goto L_103145b4;
    }
    ecx = eax & 0x8000u;
    eax = eax & 0x8000u;
    if ((arg2 & 0xfffffu) != 0u) goto L_103145a5;
    if (arg1 == 0u) goto L_103145b4;
L_103145a5: ;
    g->edx = edx;
    return ((-(ecx != 0u) & 0xffffff00u) | (-(ecx != 0u) & 0x90u)) + 0x80u;
L_103145b4: ;
    d5 = rdf64(sp0 + 4u);
    if (d5 < rdf64(COW_IMG(0x1034a1d8u)) || d5 > rdf64(COW_IMG(0x1034a1d8u)))
    {
        eax = ecx;
        goto L_103145cf;
    }
    eax = ecx;
    g->edx = edx;
    return ((-(eax != 0u) & 0xffffff00u) | (-(eax != 0u) & 0xe0u)) + 0x40u;
L_103145cf: ;
    g->edx = edx;
    return ((-(eax != 0u) & 0xffffff00u) | (-(eax != 0u) & 8u)) + 0x100u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031454a(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031454a(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
