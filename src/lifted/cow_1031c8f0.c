/* f_0x1031c8f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1031c8f0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    eax = in_eax;
    ecx = self;
    edx = in_edx;
    esi = rd32(COW_IMG(0x103d09bcu));
    loc_8 = self;
L_1031c8fd: ;
    if (rd32(esi + 0x10u) != 0xffffffffu)
    {
        ebx = 0x3ff000u;
        edi = esi + 0x2010u;
        loc_8 = 0u;
L_1031c916: ;
        if (rd32(edi) != 0xf0u) goto L_1031c957;
        t1 = ebx + rd32(esi + 0x10u);
        g->eax = t1;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x1032922cu)), ecx, 3, t1, 0x1000u, 0x4000u);
        t3 = g->ecx;
        t4 = g->edx;
        if (t2 == 0u)
        {
            eax = t2;
            ecx = t3;
            edx = t4;
            goto L_1031c957;
        }
        ecx = t3;
        edx = t4;
        wr32(edi, 0xffffffffu);
        wr32(COW_IMG(0x109b2740u), rd32(COW_IMG(0x109b2740u)) - 1u);
        if (rd32(esi + 0xcu) == 0u)
        {
            eax = rd32(esi + 0xcu);
            goto L_1031c94c;
        }
        eax = rd32(esi + 0xcu);
        if (eax <= edi) goto L_1031c94f;
L_1031c94c: ;
        wr32(esi + 0xcu, edi);
L_1031c94f: ;
        wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
        if (rd32(sp0 + 4u) == 1u)
        {
            loc_8 = loc_8 + 1u;
            goto L_1031c964;
        }
        loc_8 = loc_8 + 1u;
L_1031c957: ;
        if ((int32_t)(ebx - 0x1000u) >= 0)
        {
            ebx = ebx - 0x1000u;
            edi = edi - 8u;
            goto L_1031c916;
        }
L_1031c964: ;
        if (loc_8 == 0u)
        {
            ecx = esi;
            esi = rd32(esi + 4u);
        }
        else
        {
            ecx = esi;
            esi = rd32(esi + 4u);
            if (rd32(ecx + 0x18u) == 0xffffffffu)
            {
                eax = ecx + 0x20u;
                edx = 1u;
L_1031c97b: ;
                if (rd32(eax) != 0xffffffffu) goto L_1031c98c;
                if ((int32_t)(edx + 1u) < 1024)
                {
                    eax = eax + 8u;
                    edx = edx + 1u;
                    goto L_1031c97b;
                }
                eax = eax + 8u;
                edx = edx + 1u;
L_1031c98c: ;
                if (edx == 0x400u)
                {
                    g->eax = eax;
                    g->esp = sp0 - 0xcu;
                    t5 = cow_call_regs(g, COW_IMG(0x1031c89au), g->eax, ecx, edx, 1, 3, ecx, in_edi, in_esi);
                    t6 = g->edx;
                    eax = t5;
                    edx = t6;
                }
            }
        }
    }
    if (esi == rd32(COW_IMG(0x103d09bcu))) goto L_1031c9ad;
    if ((int32_t)rd32(sp0 + 4u) > 0) goto L_1031c8fd;
L_1031c9ad: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031c8f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1031c8f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
