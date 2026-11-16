/* f_0x10257600 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10257600(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    g->edx = arg1;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x102575f0u), 1, arg1);
    t2 = g->edx;
    t3 = rd32(t2 + 0x28u);
    if (rd32(t2 + 0x28u) == 0u)
    {
        edx = t2;
        ebx = 0x40u;
    }
    else
    {
        eax = t3;
        edx = t2;
        loc_8 = t1;
        loc_4 = t3;
        ebx = 0x40u;
        ebp = 0u;
L_1025762a: ;
        if ((int32_t)loc_8 <= 0) goto L_10257673;
        ecx = loc_8;
        esi = 0u;
L_10257634: ;
        g->eax = arg1;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t4 = cow_cdecl(g, COW_IMG(0x10257570u), 3, arg1, ebp, esi);
        t5 = g->ecx;
        t6 = g->edx;
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0x24u;
        t7 = cow_cdecl(g, COW_IMG(0x102575d0u), 1, t4);
        t8 = g->ecx;
        t9 = g->edx;
        if ((uint8_t)t7 == 0u)
        {
            ecx = t8;
            edx = t9;
            ebx = ebx + 8u;
        }
        else
        {
            ecx = t8;
            edx = t9;
            ebx = ebx + 8u;
            edi = t4;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            g->eax = eax;
            g->ecx = ~ecx;
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t10 = cow_cdecl(g, COW_IMG(0x102575b0u), 1, ~ecx);
            t11 = g->ecx;
            t12 = g->edx;
            ecx = t11;
            edx = t12;
            ebx = ebx + t10;
        }
        if ((int32_t)(esi + 1u) < (int32_t)loc_8)
        {
            esi = esi + 1u;
            goto L_10257634;
        }
        eax = loc_4;
L_10257673: ;
        if (ebp + 1u < eax)
        {
            ebp = ebp + 1u;
            goto L_1025762a;
        }
    }
    g->edx = edx;
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10257600(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10257600(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
