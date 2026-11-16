/* f_0x102ed251 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102ed251(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;

    if (rd32(in_esi + 0x20u) == 1u)
    {
        wr32(in_esi + 0x24u, 1u);
        wr32(in_esi + 0x28u, 1u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(in_esi + 0x20u) - 1u;
        if (eax == 2u)
        {
            if (rd8(in_esi + 0x100u) != 0u)
            {
                edx = 2u;
                goto L_102ed2fe;
            }
            if (rd8(in_esi + 0x106u) == 0u) goto L_102ed30c;
            if (rd8(in_esi + 0x107u) == 0u) goto L_102ed307;
            ecx = rd8(in_esi + 0x107u);
            if (ecx == 1u)
            {
                edx = 2u;
            }
            else
            {
                wr32(rd32(in_esi) + 0x14u, 0x6eu);
                t4 = rd8(in_esi + 0x107u);
                t5 = rd32(in_esi);
                wr32(t5 + 0x18u, t4);
                g->edx = 2u;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(rd32(in_esi) + 4u), t5, 0);
                t6 = g->edx;
                edx = t6;
            }
L_102ed2fe: ;
            wr32(in_esi + 0x24u, 3u);
L_102ed353: ;
            wr32(in_esi + 0x28u, 2u);
        }
        else
        {
            eax = eax - 2u;
            if (eax == 1u)
            {
                if (rd8(in_esi + 0x106u) == 0u) goto L_102ed2b5;
                if (rd8(in_esi + 0x107u) == 0u) goto L_102ed2b5;
                ecx = rd8(in_esi + 0x107u);
                if (ecx == 2u)
                {
                    edx = 2u;
                }
                else
                {
                    wr32(rd32(in_esi) + 0x14u, 0x6eu);
                    t1 = rd8(in_esi + 0x107u);
                    t2 = rd32(in_esi);
                    wr32(t2 + 0x18u, t1);
                    g->edx = 2u;
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(rd32(in_esi) + 4u), t2, 0);
                    t3 = g->edx;
                    edx = t3;
                }
                wr32(in_esi + 0x24u, 5u);
L_102ed2b8: ;
                wr32(in_esi + 0x28u, 4u);
            }
            else
            {
                wr32(in_esi + 0x24u, 0u);
                wr32(in_esi + 0x28u, 0u);
                edx = 2u;
            }
        }
    }
    wr8(in_esi + 0x40u, 0u);
    wr8(in_esi + 0x41u, 0u);
    wrf64(in_esi + 0x38u, 1.0);
    wr32(in_esi + 0x44u, 0u);
    wr8(in_esi + 0x4au, 0u);
    wr32(in_esi + 0x74u, 0u);
    wr8(in_esi + 0x58u, 0u);
    wr8(in_esi + 0x59u, 0u);
    wr8(in_esi + 0x5au, 0u);
    wr32(in_esi + 0x2cu, 1u);
    wr32(in_esi + 0x30u, 1u);
    wr8(in_esi + 0x48u, 1u);
    wr8(in_esi + 0x49u, 1u);
    wr32(in_esi + 0x4cu, 2u);
    wr8(in_esi + 0x50u, 1u);
    wr32(in_esi + 0x54u, 0x100u);
    g->edx = edx;
    return;
L_102ed2b5: ;
    wr32(in_esi + 0x24u, 4u);
    edx = 2u;
    goto L_102ed2b8;
L_102ed307: ;
    wr32(in_esi + 0x24u, 2u);
    edx = 2u;
    goto L_102ed353;
L_102ed30c: ;
    if (rd32(rd32(in_esi + 0xc4u)) != 1u)
    {
        ecx = rd32(rd32(in_esi + 0xc4u));
        edx = rd32(rd32(in_esi + 0xc4u) + 0x54u);
        edi = rd32(rd32(in_esi + 0xc4u) + 0xa8u);
        goto L_102ed35c;
    }
    ecx = rd32(rd32(in_esi + 0xc4u));
    edx = rd32(rd32(in_esi + 0xc4u) + 0x54u);
    edi = rd32(rd32(in_esi + 0xc4u) + 0xa8u);
    if (edx != 2u) goto L_102ed32f;
    if (edi == 3u) goto L_102ed34f;
L_102ed32f: ;
    t7 = rd32(in_esi);
    wr32(t7 + 0x18u, ecx);
    wr32(t7 + 0x1cu, edx);
    wr32(t7 + 0x20u, edi);
    wr32(rd32(in_esi) + 0x14u, 0x6bu);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, rd32(rd32(in_esi) + 4u), ecx, 0);
    t8 = g->edx;
    edx = t8;
L_102ed34f: ;
    wr32(in_esi + 0x24u, 3u);
L_102ed352: ;
    goto L_102ed353;
L_102ed35c: ;
    if (ecx != 0x52u) goto L_102ed32f;
    if (edx != 0x47u) goto L_102ed32f;
    if (edi != 0x42u) goto L_102ed32f;
    wr32(in_esi + 0x24u, 2u);
    goto L_102ed352;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ed251(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102ed251(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
