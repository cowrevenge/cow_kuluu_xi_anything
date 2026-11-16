/* f_0x100ec730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ec730(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(sp0 + 4u) != 0u)
    {
        edx = rd32(sp0 + 4u);
        goto L_100ec74a;
    }
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = in_eax;
        edx = rd32(COW_IMG(0x104dfd98u));
        goto L_100ec822;
    }
    edx = rd32(COW_IMG(0x104dfd98u));
L_100ec74a: ;
    t1 = rd16(edx + 0x19a50u);
    wr32(sp0 + 4u, 0x10u);
    ebp = 0u;
    edi = (in_edi & 0xffff0000u) | t1;
L_100ec75f: ;
    if ((uint16_t)ebp >= (uint16_t)edi)
    {
        eax = (uint16_t)ebp;
        goto L_100ec7ab;
    }
    eax = (uint16_t)ebp;
    if (rd8(eax * 0x18u + edx + 0x198d1u) != rd8(arg3 + 5u))
    {
        ecx = (eax * 3u & 0xffffff00u) | rd8(eax * 0x18u + edx + 0x198d1u);
        goto L_100ec78c;
    }
    ecx = (eax * 3u & 0xffffff00u) | rd8(eax * 0x18u + edx + 0x198d1u);
    esi = eax * 0x18u + edx + 0x9868u;
    if (rd8(esi + 0x1006au) == rd8(arg3 + 6u)) goto L_100ec7cd;
    ecx = (ecx & 0xffffff00u) | rd8(esi + 0x1006au);
L_100ec78c: ;
    if (rd8(eax * 0x18u + edx + 0x198d0u) != 0u)
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax * 0x18u + edx + 0x198d0u);
    }
    else
    {
        ecx = (ecx & 0xffffff00u) | rd8(eax * 0x18u + edx + 0x198d0u);
        wr32(sp0 + 4u, ebp);
    }
    if ((uint16_t)(ebp + 1u) < 0x10u)
    {
        ebp = ebp + 1u;
        goto L_100ec75f;
    }
L_100ec7f3: ;
    if ((uint16_t)rd32(sp0 + 4u) >= 0x10u)
    {
        eax = rd32(sp0 + 4u);
    }
    else
    {
        eax = rd32(sp0 + 4u);
        if (rd8(arg3 + 4u) != 0u)
        {
            esi = arg3 + 4u;
            edi = edx + (uint16_t)eax * 0x18u + 0x198d0u;
            ecx = 6u;
            while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            eax = (uint16_t)eax + 0xaafu;
        }
    }
L_100ec822: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_100ec7ab: ;
    esi = arg3 + 4u;
    edi = eax * 0x18u + edx + 0x198d0u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edx + 0x19a50u, (uint16_t)(rd16(edx + 0x19a50u) + 1u));
    eax = eax + 0xaafu;
L_100ec7ed: ;
    if ((uint16_t)ebp < 0x10u) goto L_100ec822;
    goto L_100ec7f3;
L_100ec7cd: ;
    esi = arg3 + 4u;
    edi = edx + (uint16_t)ebp * 0x18u + 0x198d0u;
    ecx = 6u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    eax = (uint16_t)ebp * 3u + 0x200du;
    goto L_100ec7ed;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ec730(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ec730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
