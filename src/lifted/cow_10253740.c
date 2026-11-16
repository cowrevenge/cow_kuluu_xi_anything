/* f_0x10253740 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10253740(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(arg1 + 0xcu) == 0u) goto L_1025377e;
    eax = rd32(arg1 + 0xcu);
    g->eax = eax * 3u;
    g->edx = in_edx;
    g->esp = sp0;
    t1 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, eax * 3u, in_edi, in_esi);
    t2 = g->edx;
    wr32(arg1 + 0x1cu, t1);
    if (t1 == 0u) goto L_10253819;
    eax = t1;
    edx = t2;
    t3 = rd32(arg1 + 0xcu);
    g->eax = eax;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t3, in_edi, in_esi);
    wr32(arg1 + 0x28u, t4);
    if (t4 != 0u) goto L_10253784;
    return 0u;
L_1025377e: ;
    wr32(arg1 + 0x1cu, 0u);
    wr32(arg1 + 0x28u, 0u);
L_10253784: ;
    t5 = rd32(arg1 + 4u);
    t6 = (rd32(arg1 + 8u) * rd32(arg1) + 0x1fu) >> 5u << 2u;
    t7 = rd32(arg1 + 8u);
    t8 = rd32(arg1);
    wr32(arg1 + 0x14u, t6);
    t9 = t5 * ((t7 * t8 + 0x1fu) >> 5u << 2u);
    wr32(arg1 + 0x18u, t9);
    g->eax = t5 * 4u;
    g->edx = t9;
    g->esp = sp0;
    t10 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t5 * 4u, in_edi, in_esi);
    t11 = g->edx;
    t12 = rd32(arg1 + 0x18u);
    wr32(arg1 + 0x20u, t10);
    g->edx = t11;
    g->esp = sp0 - 4u;
    t13 = cow_cdecl(g, COW_IMG(0x10312fd6u), 3, t12, t5 * 4u, in_edi);
    t14 = g->edx;
    t15 = rd32(arg1 + 0x20u);
    wr32(arg1 + 0x24u, t13);
    if (t15 == 0u)
    {
        eax = t13;
        ecx = t15;
        edx = t14;
        goto L_10253810;
    }
    eax = t13;
    ecx = t15;
    edx = t14;
    if (eax == 0u) goto L_10253810;
    if (rd32(arg1 + 0x10u) == 0u)
    {
        edx = rd32(arg1 + 4u);
        goto L_102537ee;
    }
    edx = rd32(arg1 + 4u);
    if ((int32_t)(edx - 1u) < 0) goto L_10253807;
    edx = edx - 1u;
    edx = edx + 1u;
L_102537d8: ;
    wr32(ecx, eax);
    if (edx != 1u)
    {
        eax = eax + rd32(arg1 + 0x14u);
        ecx = ecx + 4u;
        edx = edx - 1u;
        goto L_102537d8;
    }
    return 1u;
L_102537ee: ;
    if ((int32_t)(edx - 1u) >= 0)
    {
        eax = eax + rd32(arg1 + 0x18u);
        edx = edx - 1u;
        edx = edx + 1u;
L_102537f7: ;
        wr32(eax - 4u, 0u);
        t16 = eax - rd32(arg1 + 0x14u);
        wr32(ecx, t16);
        if (edx != 1u)
        {
            eax = t16;
            ecx = ecx + 4u;
            edx = edx - 1u;
            goto L_102537f7;
        }
    }
L_10253807: ;
    return 1u;
L_10253810: ;
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10253820u), g->eax, ecx, edx, 1, 3, arg1, in_edi, in_esi);
L_10253819: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10253740(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10253740(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
