/* f_0x100ddbb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100ddbb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_100ddd02;
    }
    if (rd32(arg1 + 4u) == 0u)
    {
        edx = in_edx;
        goto L_100ddd02;
    }
    ecx = rd32(arg1 + 4u);
    if (arg3 == 0u) goto L_100ddc4f;
    t1 = rd32(arg1 + 0xcu);
    t2 = cow_divs(g, t1, ecx);
    t3 = cow_mods(g, t1, ecx);
    if (t3 == rd32(arg1 + 8u)) goto L_100ddc4f;
    esi = t1;
    ebx = 0u;
    ebp = rd32(arg1);
L_100ddbe6: ;
    if ((rd16(ebp + esi * 0x110u) & 0x1ffu) != 0u)
    {
        eax = ebp + esi * 0x110u;
        ecx = (ecx & 0xffff0000u) | (rd16(ebp + esi * 0x110u) & 0x1ffu);
    }
    else
    {
        eax = ebp + esi * 0x110u;
        ecx = (ecx & 0xffff0000u) | (rd16(ebp + esi * 0x110u) & 0x1ffu);
        if (ebx == 0u)
        {
            ebx = eax;
        }
    }
    if ((uint16_t)ecx == 0xcu) goto L_100ddc1a;
    if ((uint16_t)ecx == 0xdu) goto L_100ddc1a;
    if ((uint16_t)ecx == 0xeu) goto L_100ddc1a;
    if ((uint16_t)ecx != 0x11u) goto L_100ddc28;
L_100ddc1a: ;
    if (rd32(eax + 0x104u) == arg3)
    {
        edx = rd32(eax + 0x104u);
        goto L_100ddc3f;
    }
L_100ddc28: ;
    t4 = cow_divs(g, esi + 1u, rd32(arg1 + 4u));
    t5 = cow_mods(g, esi + 1u, rd32(arg1 + 4u));
    t6 = cow_divs(g, t5, rd32(arg1 + 4u));
    t7 = cow_mods(g, t5, rd32(arg1 + 4u));
    if (t7 != rd32(arg1 + 8u))
    {
        ecx = rd32(arg1 + 4u);
        esi = t5;
        goto L_100ddbe6;
    }
    edx = t7;
L_100ddc47: ;
    if (ebx != 0u) goto L_100ddceb;
L_100ddc4f: ;
    t8 = rd32(arg1 + 0xcu);
    if ((int32_t)rd32(arg1 + 8u) < (int32_t)t8)
    {
        eax = t8 - rd32(arg1 + 8u);
        ecx = rd32(arg1 + 8u);
        esi = t8;
    }
    else
    {
        eax = t8 - rd32(arg1 + 8u);
        ecx = rd32(arg1 + 8u);
        esi = t8;
        eax = eax + rd32(arg1 + 4u);
    }
    if ((int32_t)rd32(arg1 + 0x14u) <= (int32_t)eax) goto L_100ddccd;
    if (rd16(arg1 + 0x18u) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x1au) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x1cu) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x1eu) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x20u) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x22u) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x24u) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x26u) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x28u) == arg2) goto L_100ddccd;
    if (rd16(arg1 + 0x2au) != arg2)
    {
        edx = rd16(arg1 + 0x2au);
        goto L_100ddd02;
    }
L_100ddccd: ;
    t9 = cow_divs(g, ecx + 1u, rd32(arg1 + 4u));
    t10 = cow_mods(g, ecx + 1u, rd32(arg1 + 4u));
    if (esi == t10)
    {
        edx = t10;
        goto L_100ddd02;
    }
    edx = t10;
    t11 = rd32(arg1);
    wr32(arg1 + 8u, edx);
    if (ecx * 0x110u + t11 == 0u) goto L_100ddd02;
    ebx = ecx * 0x110u + t11;
L_100ddceb: ;
    wr32(ebx + 0x10cu, arg1);
    wr32(ebx + 0x104u, arg4);
    g->edx = edx;
    return ebx;
L_100ddc3f: ;
    wr16(arg1 + 0x2cu, 1u);
    ebx = eax;
    goto L_100ddc47;
L_100ddd02: ;
    g->edx = edx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ddbb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ddbb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
