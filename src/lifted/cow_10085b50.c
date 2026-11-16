/* f_0x10085b50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10085b50(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x10u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_10085be3;
    }
    eax = t1;
    edx = t2;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, COW_IMG(0x1018c610u), eax, 0);
    t4 = g->edx;
    if (t3 == 0u)
    {
        edx = t4;
        ebp = t3;
        loc_4 = self;
    }
    else
    {
        eax = t3;
        edx = t4;
        ebp = t3;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, COW_IMG(0x1018c6b0u), ebp, 5, self, 0u, 0u, arg1, 0u);
        t5 = g->edx;
        if ((int32_t)arg1 <= 0)
        {
            edx = t5;
            loc_4 = self;
        }
        else
        {
            edx = t5;
            ebx = 0u;
            loc_4 = 0u;
L_10085b8c: ;
            t6 = rd32(arg2 + ebx * 4u);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x1018c790u), ebp, 1, t6);
            t7 = g->edx;
            if (loc_4 + rd32(rd32(ebp + 0xcu) + 0x20u) == 0u)
            {
                edx = t7;
            }
            else
            {
                eax = loc_4 + rd32(rd32(ebp + 0xcu) + 0x20u);
                edx = t7;
                esi = t6;
                if (rd32(esi + 0x70u) != 0u)
                {
                    esi = rd32(esi + 0x70u);
                    t8 = rd32(esi + 0x78u);
                    wr32(eax + 4u, t8);
                    edx = t8;
                }
                esi = COW_IMG(0x1032cfacu);
                edi = eax + 8u;
                ecx = 0xbu;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            }
            if ((int32_t)(ebx + 1u) < (int32_t)arg1)
            {
                ebx = ebx + 1u;
                loc_4 = loc_4 + 0x34u;
                goto L_10085b8c;
            }
            loc_4 = loc_4 + 0x34u;
        }
    }
    g->edx = edx;
    return ebp;
L_10085be3: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085b50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10085b50(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
