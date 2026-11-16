/* f_0x10253e90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10253e90(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    wr32(arg2, 0u);
    t2 = rd32(t1 + 0xcu) * 4u + rd32(t1 + 0x18u) + 0x3du;
    t3 = rd32(t1 + 0x18u);
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10028640u), t2, rd32(t1 + 0xcu), t3, 1, 2, t2, 4u);
    t5 = g->edx;
    if (t4 != 0u)
    {
        edx = t5;
        esi = t1;
        edi = t4;
        wr8(edi, 0x30u);
        wr32(edi + 0x15u, rd32(esi));
        t6 = rd32(esi + 4u);
        wr32(edi + 0x19u, t6);
        wr16(edi + 0x1fu, rd16(esi + 8u));
        wr32(edi + 0x35u, 0x20u);
        wr8(edi + 0x39u, 9u);
        t7 = rd32(esi + 0xcu);
        wr32(sp0 + 4u, edi + 0x3du);
        if (t7 == 0u)
        {
            edx = t7;
            ebx = edi + 0x3du;
        }
        else
        {
            ecx = edi + 0x3du;
            edx = t7;
            ebx = edi + 0x3du;
            if (edx != 0u)
            {
                eax = 0u;
                edx = 0u;
L_10253efa: ;
                wr8(ecx + 2u, rd8(edx + rd32(esi + 0x1cu)));
                wr8(ecx + 1u, rd8(edx + rd32(esi + 0x1cu) + 1u));
                t8 = rd32(esi + 0x1cu);
                t9 = rd8(edx + rd32(esi + 0x1cu) + 2u);
                wr8(ecx, (uint8_t)t9);
                if (rd32(esi + 0x28u) == 0u)
                {
                    wr8(ecx + 3u, 0x80u);
                }
                else
                {
                    ebx = (t8 & 0xffffff00u) | t9;
                    ebp = rd32(esi + 0x28u);
                    wr8(ecx + 3u, rd8(eax + ebp));
                }
                if (eax + 1u < rd32(esi + 0xcu))
                {
                    eax = eax + 1u;
                    ecx = ecx + 4u;
                    edx = edx + 3u;
                    goto L_10253efa;
                }
                edx = edx + 3u;
                ebx = rd32(sp0 + 4u);
            }
            if (rd32(esi + 8u) == 4u)
            {
                ebx = ebx + 0x40u;
            }
            else
            {
                eax = rd32(esi + 8u);
                if (eax == 8u)
                {
                    ebx = ebx + 0x400u;
                }
            }
        }
        if (rd32(esi + 0x18u) == 0u) goto L_10253f70;
        eax = 0u;
L_10253f5d: ;
        t10 = rd8(eax + rd32(esi + 0x24u));
        wr8(eax + ebx, (uint8_t)t10);
        if (eax + 1u < rd32(esi + 0x18u))
        {
            eax = eax + 1u;
            edx = (edx & 0xffffff00u) | t10;
            goto L_10253f5d;
        }
L_10253f70: ;
        wr32(arg2, edi);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253e90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10253e90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
