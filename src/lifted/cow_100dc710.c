/* f_0x100dc710 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_100dc710(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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

    eax = COW_IMG(0x10360388u);
    ecx = rd32(sp0 + 4u);
    edx = rd32(sp0 + 4u) + 0x48u;
L_100dc721: ;
    esi = 0x100u;
L_100dc726: ;
    wr32(edx, rd32(eax));
    if (esi != 1u)
    {
        eax = eax + 4u;
        edx = edx + 4u;
        esi = esi - 1u;
        goto L_100dc726;
    }
    eax = eax + 4u;
    edx = edx + 4u;
    if ((int32_t)eax < (int32_t)COW_IMG(0x10361388u)) goto L_100dc721;
    eax = 0u;
    ebx = rd32(sp0 + 0x10u);
    esi = ecx;
    edi = COW_IMG(0x10360340u) - ecx;
    loc_4 = 0x12u;
L_100dc751: ;
    wr32(sp0 + 4u, 4u);
    edx = 0u;
L_100dc75b: ;
    if ((int32_t)(eax + 1u) < (int32_t)ebx)
    {
        edx = edx << 8u | (uint32_t)(int8_t)rd8(eax + rd32(sp0 + 0xcu));
        eax = eax + 1u;
    }
    else
    {
        edx = edx << 8u | (uint32_t)(int8_t)rd8(eax + rd32(sp0 + 0xcu));
        eax = 0u;
    }
    t1 = rd32(sp0 + 4u) - 1u;
    t2 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, t1);
    if (t2 != 1u) goto L_100dc75b;
    t3 = rd32(edi + esi) ^ edx;
    wr32(esi, t3);
    if (loc_4 != 1u)
    {
        esi = esi + 4u;
        loc_4 = loc_4 - 1u;
        goto L_100dc751;
    }
    loc_4 = loc_4 - 1u;
    wr32(sp0 + 4u, 0u);
    eax = 0u;
    edx = 0u;
L_100dc798: ;
    esi = 0u;
L_100dc79a: ;
    t4 = eax ^ rd32(ecx + esi * 4u);
    t5 = rd32(ecx + (uint8_t)t4 * 4u + 0x48u) + rd32(ecx + (uint8_t)(t4 >> 0x10u) * 4u + 0x848u) + ((rd32(ecx + (t4 >> 0x18u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(ecx + (uint8_t)(t4 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
    if ((int32_t)(esi + 1u) < 16)
    {
        eax = t5 ^ edx;
        edx = t4;
        esi = esi + 1u;
        goto L_100dc79a;
    }
    eax = t5 ^ edx;
    edx = t4;
    t6 = edx ^ rd32(ecx + 0x44u);
    t7 = rd32(ecx + 0x40u);
    t8 = rd32(sp0 + 4u);
    wr32(ecx + t8 * 4u, t6);
    wr32(ecx + t8 * 4u + 4u, t7 ^ eax);
    wr32(sp0 + 4u, t8 + 2u);
    if ((int32_t)(t8 + 2u) < 18)
    {
        edx = t7 ^ eax;
        eax = t6;
        goto L_100dc798;
    }
    edx = t7 ^ eax;
    eax = t6;
    wr32(sp0 + 0xcu, 4u);
    esi = ecx + 0x4cu;
L_100dc828: ;
    wr32(sp0 + 4u, esi);
    wr32(sp0 + 0x10u, 0x80u);
L_100dc834: ;
    esi = 0u;
L_100dc836: ;
    t9 = eax ^ rd32(ecx + esi * 4u);
    t10 = rd32(ecx + (uint8_t)t9 * 4u + 0x48u) + rd32(ecx + (uint8_t)(t9 >> 0x10u) * 4u + 0x848u) + ((rd32(ecx + (t9 >> 0x18u) * 4u + 0xc48u) & 1u) ^ 0x20u) + ((rd32(ecx + (uint8_t)(t9 >> 8u) * 4u + 0x448u) & 1u) ^ 0x20u);
    if ((int32_t)(esi + 1u) < 16)
    {
        eax = t10 ^ edx;
        edx = t9;
        esi = esi + 1u;
        goto L_100dc836;
    }
    eax = t10 ^ edx;
    edx = t9;
    t11 = edx ^ rd32(ecx + 0x44u);
    t12 = rd32(ecx + 0x40u);
    t13 = rd32(sp0 + 4u);
    t14 = rd32(sp0 + 0x10u);
    wr32(t13 - 4u, t11);
    wr32(t13, t12 ^ eax);
    wr32(sp0 + 4u, t13 + 8u);
    wr32(sp0 + 0x10u, t14 - 1u);
    if (t14 != 1u)
    {
        edx = t12 ^ eax;
        eax = t11;
        goto L_100dc834;
    }
    edx = t12 ^ eax;
    eax = t11;
    esi = t13 + 8u;
    t15 = rd32(sp0 + 0xcu) - 1u;
    t16 = rd32(sp0 + 0xcu);
    wr32(sp0 + 0xcu, t15);
    if (t16 != 1u) goto L_100dc828;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100dc710(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100dc710(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
